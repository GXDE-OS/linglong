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
 * NewUploadTaskID_200_response.h
 *
 * 
 */

#ifndef NewUploadTaskID_200_response_H
#define NewUploadTaskID_200_response_H

#include <QJsonObject>

#include "Response_NewUploadTaskResp.h"
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace linglong {
namespace api {
namespace client {
class Response_NewUploadTaskResp;

class NewUploadTaskID_200_response : public Object {
public:
    NewUploadTaskID_200_response();
    NewUploadTaskID_200_response(QString json);
    ~NewUploadTaskID_200_response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getCode() const;
    void setCode(const qint32 &code);
    bool is_code_Set() const;
    bool is_code_Valid() const;

    Response_NewUploadTaskResp getData() const;
    void setData(const Response_NewUploadTaskResp &data);
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

    Response_NewUploadTaskResp m_data;
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

Q_DECLARE_METATYPE(linglong::api::client::NewUploadTaskID_200_response)

#endif // NewUploadTaskID_200_response_H
