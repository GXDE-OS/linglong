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

#include "FuzzySearchApp_200_response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace linglong {
namespace api {
namespace client {

FuzzySearchApp_200_response::FuzzySearchApp_200_response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

FuzzySearchApp_200_response::FuzzySearchApp_200_response() {
    this->initializeModel();
}

FuzzySearchApp_200_response::~FuzzySearchApp_200_response() {}

void FuzzySearchApp_200_response::initializeModel() {

    m_code_isSet = false;
    m_code_isValid = false;

    m_data_isSet = false;
    m_data_isValid = false;

    m_msg_isSet = false;
    m_msg_isValid = false;

    m_trace_id_isSet = false;
    m_trace_id_isValid = false;
}

void FuzzySearchApp_200_response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void FuzzySearchApp_200_response::fromJsonObject(QJsonObject json) {

    m_code_isValid = ::linglong::api::client::fromJsonValue(m_code, json[QString("code")]);
    m_code_isSet = !json[QString("code")].isNull() && m_code_isValid;

    m_data_isValid = ::linglong::api::client::fromJsonValue(m_data, json[QString("data")]);
    m_data_isSet = !json[QString("data")].isNull() && m_data_isValid;

    m_msg_isValid = ::linglong::api::client::fromJsonValue(m_msg, json[QString("msg")]);
    m_msg_isSet = !json[QString("msg")].isNull() && m_msg_isValid;

    m_trace_id_isValid = ::linglong::api::client::fromJsonValue(m_trace_id, json[QString("trace_id")]);
    m_trace_id_isSet = !json[QString("trace_id")].isNull() && m_trace_id_isValid;
}

QString FuzzySearchApp_200_response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject FuzzySearchApp_200_response::asJsonObject() const {
    QJsonObject obj;
    if (m_code_isSet) {
        obj.insert(QString("code"), ::linglong::api::client::toJsonValue(m_code));
    }
    if (m_data.size() > 0) {
        obj.insert(QString("data"), ::linglong::api::client::toJsonValue(m_data));
    }
    if (m_msg_isSet) {
        obj.insert(QString("msg"), ::linglong::api::client::toJsonValue(m_msg));
    }
    if (m_trace_id_isSet) {
        obj.insert(QString("trace_id"), ::linglong::api::client::toJsonValue(m_trace_id));
    }
    return obj;
}

qint32 FuzzySearchApp_200_response::getCode() const {
    return m_code;
}
void FuzzySearchApp_200_response::setCode(const qint32 &code) {
    m_code = code;
    m_code_isSet = true;
}

bool FuzzySearchApp_200_response::is_code_Set() const{
    return m_code_isSet;
}

bool FuzzySearchApp_200_response::is_code_Valid() const{
    return m_code_isValid;
}

QList<Request_RegisterStruct> FuzzySearchApp_200_response::getData() const {
    return m_data;
}
void FuzzySearchApp_200_response::setData(const QList<Request_RegisterStruct> &data) {
    m_data = data;
    m_data_isSet = true;
}

bool FuzzySearchApp_200_response::is_data_Set() const{
    return m_data_isSet;
}

bool FuzzySearchApp_200_response::is_data_Valid() const{
    return m_data_isValid;
}

QString FuzzySearchApp_200_response::getMsg() const {
    return m_msg;
}
void FuzzySearchApp_200_response::setMsg(const QString &msg) {
    m_msg = msg;
    m_msg_isSet = true;
}

bool FuzzySearchApp_200_response::is_msg_Set() const{
    return m_msg_isSet;
}

bool FuzzySearchApp_200_response::is_msg_Valid() const{
    return m_msg_isValid;
}

QString FuzzySearchApp_200_response::getTraceId() const {
    return m_trace_id;
}
void FuzzySearchApp_200_response::setTraceId(const QString &trace_id) {
    m_trace_id = trace_id;
    m_trace_id_isSet = true;
}

bool FuzzySearchApp_200_response::is_trace_id_Set() const{
    return m_trace_id_isSet;
}

bool FuzzySearchApp_200_response::is_trace_id_Valid() const{
    return m_trace_id_isValid;
}

bool FuzzySearchApp_200_response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_data.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_msg_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_trace_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool FuzzySearchApp_200_response::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace linglong
} // namespace api
} // namespace client
