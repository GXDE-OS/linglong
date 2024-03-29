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
 * Api_JSONResult.h
 *
 * 
 */

#ifndef Api_JSONResult_H
#define Api_JSONResult_H

#include <QJsonObject>

#include "Object.h"
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace linglong {
namespace api {
namespace client {

class Api_JSONResult : public Object {
public:
    Api_JSONResult();
    Api_JSONResult(QString json);
    ~Api_JSONResult() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getCode() const;
    void setCode(const qint32 &code);
    bool is_code_Set() const;
    bool is_code_Valid() const;

    Object getData() const;
    void setData(const Object &data);
    bool is_data_Set() const;
    bool is_data_Valid() const;

    QString getMsg() const;
    void setMsg(const QString &msg);
    bool is_msg_Set() const;
    bool is_msg_Valid() const;

    QString getTraceId() const;
    void setTraceId(const QString &trace_id);
    bool is_trace_id_Set() const;
    bool is_trace_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_code;
    bool m_code_isSet;
    bool m_code_isValid;

    Object m_data;
    bool m_data_isSet;
    bool m_data_isValid;

    QString m_msg;
    bool m_msg_isSet;
    bool m_msg_isValid;

    QString m_trace_id;
    bool m_trace_id_isSet;
    bool m_trace_id_isValid;
};

} // namespace linglong
} // namespace api
} // namespace client

Q_DECLARE_METATYPE(linglong::api::client::Api_JSONResult)

#endif // Api_JSONResult_H
