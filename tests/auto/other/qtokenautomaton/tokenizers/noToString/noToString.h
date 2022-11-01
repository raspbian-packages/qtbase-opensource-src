/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the test suite of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:GPL-EXCEPT$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3 as published by the Free Software
** Foundation with exceptions as appearing in the file LICENSE.GPL3-EXCEPT
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/
/* NOTE: This file is AUTO GENERATED by qtokenautomaton2cpp.xsl. */

#ifndef q_NoToStringNS_h
#define q_NoToStringNS_h

#include <QtCore/QString>

QT_BEGIN_NAMESPACE

namespace NoToStringNS
                {
            class NoToString
                {
                public:
                enum Token

                {
                NoKeyword,
AReallyLongTokenIFreakinMeanItUKnowUKnowKnow,
ColonInName,
FFFF,
FFFG,
FFGF,
FFGG,
FFLM,
_,
_111,
wobbly
                };

                static inline Token toToken(const QString &value);
static inline Token toToken(const QStringRef &value);
static Token toToken(const QChar *data, int length);


                private:
                    static inline Token classifier3(const QChar *data);
static inline Token classifier4(const QChar *data);
static inline Token classifier14(const QChar *data);
static inline Token classifier44(const QChar *data);

                };

                inline NoToString::Token NoToString::toToken(const QString &value)
                {
                    return toToken(value.constData(), value.length());
                }

                inline NoToString::Token NoToString::toToken(const QStringRef &value)
                {
                    return toToken(value.constData(), value.length());
                }

                }

QT_END_NAMESPACE

#endif
