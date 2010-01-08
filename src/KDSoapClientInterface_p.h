#ifndef KDSOAPCLIENTINTERFACE_P_H
#define KDSOAPCLIENTINTERFACE_P_H

#include <QNetworkAccessManager>
#include "KDSoapClientInterface.h"
#include "KDSoapClientThread_p.h"
class QBuffer;
class KDSoapMessage;

class KDSoapClientInterface::Private
{
public:
    QNetworkAccessManager accessManager;
    QString endPoint;
    QString messageNamespace;
    KDSoapClientThread thread;

    QNetworkRequest prepareRequest(const QString &method, const QString& action);
    QBuffer* prepareRequestBuffer(const QString& method, const KDSoapMessage& message);
};

#endif // KDSOAPCLIENTINTERFACE_P_H
