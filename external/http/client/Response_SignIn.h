/**
 * linglong仓库
 * 玲珑仓库接口
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: wurongjie@deepin.org
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Response_SignIn.h
 *
 * 
 */

#ifndef Response_SignIn_H
#define Response_SignIn_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace linglong {
namespace api {
namespace client {

class Response_SignIn : public Object {
public:
    Response_SignIn();
    Response_SignIn(QString json);
    ~Response_SignIn() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getToken() const;
    void setToken(const QString &token);
    bool is_token_Set() const;
    bool is_token_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_token;
    bool m_token_isSet;
    bool m_token_isValid;
};

} // namespace linglong
} // namespace api
} // namespace client

Q_DECLARE_METATYPE(linglong::api::client::Response_SignIn)

#endif // Response_SignIn_H
