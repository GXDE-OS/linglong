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

#include "Response_UploadTaskResp.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace linglong {
namespace api {
namespace client {

Response_UploadTaskResp::Response_UploadTaskResp(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Response_UploadTaskResp::Response_UploadTaskResp() {
    this->initializeModel();
}

Response_UploadTaskResp::~Response_UploadTaskResp() {}

void Response_UploadTaskResp::initializeModel() {

    m_watch_id_isSet = false;
    m_watch_id_isValid = false;
}

void Response_UploadTaskResp::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Response_UploadTaskResp::fromJsonObject(QJsonObject json) {

    m_watch_id_isValid = ::linglong::api::client::fromJsonValue(m_watch_id, json[QString("watchId")]);
    m_watch_id_isSet = !json[QString("watchId")].isNull() && m_watch_id_isValid;
}

QString Response_UploadTaskResp::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Response_UploadTaskResp::asJsonObject() const {
    QJsonObject obj;
    if (m_watch_id_isSet) {
        obj.insert(QString("watchId"), ::linglong::api::client::toJsonValue(m_watch_id));
    }
    return obj;
}

QString Response_UploadTaskResp::getWatchId() const {
    return m_watch_id;
}
void Response_UploadTaskResp::setWatchId(const QString &watch_id) {
    m_watch_id = watch_id;
    m_watch_id_isSet = true;
}

bool Response_UploadTaskResp::is_watch_id_Set() const{
    return m_watch_id_isSet;
}

bool Response_UploadTaskResp::is_watch_id_Valid() const{
    return m_watch_id_isValid;
}

bool Response_UploadTaskResp::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_watch_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Response_UploadTaskResp::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace linglong
} // namespace api
} // namespace client
