# Created by: Stas Timokhin <devel@stasyan.com>
# $FreeBSD$

PORTNAME=	picpuz
PORTVERSION=	2.1.1
PORTREVISION=	5
CATEGORIES=	graphics games
MASTER_SITES=	http://kornelix.squarespace.com/storage/downloads/ \
		http://www.stasyan.com/devel/distfiles/

MAINTAINER=	devel@stasyan.com
COMMENT=	Jigsaw puzzle program

USES=		gmake pkgconfig
USE_GNOME=	gtk20

ALL_TARGET=	#
#RUN_DEPENDS+=	xdg-desktop-menu:${PORTSDIR}/devel/xdg-utils
LIB_DEPENDS+=	libexecinfo.so:${PORTSDIR}/devel/libexecinfo
DESKTOP_ENTRIES="Picpuz" \
		"Jigsaw Puzzle" \
		"${PREFIX}/share/pixmaps/picpuz.png" \
		"picpuz" \
		"Graphics;Game;GTK;" \
		true

post-install:
	(cd ${STAGEDIR}${PREFIX}/share/pixmaps && \
		${LN} -s ${DATADIR}/icons/picpuz.png .)

.include <bsd.port.mk>
