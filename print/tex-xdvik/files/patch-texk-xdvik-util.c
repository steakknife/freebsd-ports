--- texk/xdvik/util.c.orig	2014-09-02 18:41:34.000000000 +0900
+++ texk/xdvik/util.c	2015-01-31 21:02:18.000000000 +0900
@@ -215,6 +215,7 @@
     {  DBG_GUI,		"gui",		", " },
     {  DBG_FIND,	"find",		", " },
     {  DBG_FILES,	"files",	", " },
+    {  DBG_PTEXFNT,	"ptexfnt",	", " },
     {  DBG_ALL,		"all",		"\n" },
     /* end marker */
     {  0,		NULL,		NULL }
@@ -708,6 +709,38 @@
     bitmap->bits = xmalloc(size != 0 ? size : 1);
 }
 
+void
+clear_bitmap(struct bitmap *bitmap)
+{
+    memset(bitmap->bits, 0, bitmap->bytes_wide * bitmap->h);
+}
+
+void
+fill_bitmap(struct bitmap *bitmap)
+{
+    memset(bitmap->bits, 0xff, bitmap->bytes_wide * bitmap->h);
+}
+
+void
+order_reverse_bitmap(struct bitmap *bitmap)
+{
+    int i, size = bitmap->bytes_wide * bitmap->h;
+    unsigned char *p = (unsigned char *)bitmap->bits;
+    static unsigned char reverse_byte[0x100];
+
+    if (reverse_byte[1] == 0) {  /* init reverse_byte[] */
+	for (i=0; i<0x100; i++) {
+	    int src, dst = 0;
+	    for (src=1; src<0x100; src<<=1) {
+		dst <<= 1;
+		if (i & src) dst |= 1;
+	    }
+	    reverse_byte[i] = dst;
+	}
+    }
+
+    for (i=0; i<size; i++) p[i] = reverse_byte[p[i]];
+}
 
 #ifndef HAVE_MEMICMP
 /*
@@ -1581,6 +1614,8 @@
 }
 
 
+#if FREETYPE || PS
+
 /*
  *	General AVL tree mechanism.  Search for a node, and return it if found.
  *	Otherwise insert a node.
@@ -1712,6 +1747,8 @@
 	return ap;
 }
 
+#endif /* FREETYPE || PS */
+
 
 /* set globals.dvi_name, globals.dvi_file.dirname and globals.dvi_file.dirlen */
 void
