# $FreeBSD$

PORTNAME=	game_sdl2
PORTVERSION=	6.99.4
CATEGORIES=	devel python
MASTER_SITES=	http://www.renpy.org/dl/${PORTVERSION}/ \
		GENTOO
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	py${PORTNAME}-for-renpy-${DISTVERSION}

MAINTAINER=	jbeich@FreeBSD.org
COMMENT=	Reimplementation of portions of the pygame API using SDL2

LICENSE=	LGPL21 ZLIB
LICENSE_COMB=	multi

BUILD_DEPENDS=	cython:${PORTSDIR}/lang/cython
LIB_DEPENDS=	libjpeg.so:${PORTSDIR}/graphics/jpeg \
		libpng.so:${PORTSDIR}/graphics/png

# Upstream tends to reroll distfiles before moving under /release/
PORTSCOUT=	site:http://www.renpy.org/dl/release/

USES=		python tar:bz2
USE_SDL=	image2 mixer2 ttf2
USE_PYTHON=	autoplist distutils
WRKSRC=		${WRKDIR}/${DISTNAME:S/_/-/}

post-install:
	${FIND} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR} -name \*.so \
		-exec ${STRIP_CMD} {} +

.include <bsd.port.mk>
