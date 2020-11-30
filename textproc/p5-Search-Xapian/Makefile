# $NetBSD: Makefile,v 1.35 2020/11/30 11:59:09 schmonz Exp $

DISTNAME=		Search-Xapian-1.2.25.4
PKGNAME=		${DISTNAME:S/^/p5-/}
CATEGORIES=		textproc perl5
MASTER_SITES=		${MASTER_SITE_PERL_CPAN:=Search/}

MAINTAINER=		schmonz@NetBSD.org
HOMEPAGE=		https://xapian.org/docs/bindings/perl/Search/Xapian.html
COMMENT=		Perl XS frontend to the Xapian C++ search library
LICENSE=		${PERL5_LICENSE}

BUILD_DEPENDS+=		p5-Devel-Leak-[0-9]*:../../devel/p5-Devel-Leak

USE_LANGUAGES=		c++

PERL5_PACKLIST=		auto/Search/Xapian/.packlist

.include "../../textproc/xapian/buildlink3.mk"
.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
