# $NetBSD: Makefile,v 1.24 2021/01/23 14:23:00 bsiegert Exp $

DISTNAME=	logrus-1.0.6
PKGNAME=	go-${DISTNAME}
PKGREVISION=	23
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_GITHUB:=sirupsen/}
GITHUB_PROJECT=	logrus
GITHUB_TAG=	v${PKGVERSION_NOREV}

MAINTAINER=	minskim@NetBSD.org
HOMEPAGE=	https://github.com/sirupsen/logrus
COMMENT=	Structured, pluggable logging for Go
LICENSE=	mit

GO_DIST_BASE=	${DISTNAME}
GO_SRCPATH=	github.com/sirupsen/logrus

.include "../../devel/go-sys/buildlink3.mk"
.include "../../security/go-crypto/buildlink3.mk"
.include "../../lang/go/go-package.mk"
.include "../../mk/bsd.pkg.mk"
