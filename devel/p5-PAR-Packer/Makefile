# Created by: Rong-En Fan <rafan@FreeBSD.org>
# $FreeBSD$

PORTNAME=	PAR-Packer
PORTVERSION=	1.025
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	PAR Packager

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Archive-Zip>=1:${PORTSDIR}/archivers/p5-Archive-Zip \
		p5-Getopt-ArgvFile>=1.07:${PORTSDIR}/devel/p5-Getopt-ArgvFile \
		p5-Module-ScanDeps>=1.17:${PORTSDIR}/devel/p5-Module-ScanDeps \
		p5-Module-Signature>=0:${PORTSDIR}/security/p5-Module-Signature \
		p5-PAR-Dist>=0.22:${PORTSDIR}/devel/p5-PAR-Dist \
		p5-PAR>=1.005:${PORTSDIR}/devel/p5-PAR
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAKE_JOBS_UNSAFE=	yes
USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
