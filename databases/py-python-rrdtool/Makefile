# $FreeBSD$

PORTNAME=	python-rrdtool
PORTVERSION=	1.4.7
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	robak@FreeBSD.org
COMMENT=	Python bindings for RRDTool, the graphing and logging utility

LICENSE=	LGPL3

LIB_DEPENDS=	librrd.so:${PORTSDIR}/databases/rrdtool

USES=		pkgconfig python
USE_GNOME=	cairo glib20 libxml2
USE_PYTHON=	distutils autoplist

LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
