# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD$

PORTNAME=	liblas
PORTVERSION=	1.7.0
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Library For Reading And Writing LAS-Format Data

LIB_DEPENDS=	libboost_thread.so:${PORTSDIR}/devel/boost-libs

LICENSE=	BSD2CLAUSE

CONFLICTS=	liblas12-1.2*

USES=		cmake libtool
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	libLAS
GH_PROJECT=	${GH_ACCOUNT}

.include <bsd.port.mk>
