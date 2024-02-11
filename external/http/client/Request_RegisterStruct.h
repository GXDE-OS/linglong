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
 * Request_RegisterStruct.h
 *
 * 
 */

#ifndef Request_RegisterStruct_H
#define Request_RegisterStruct_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace linglong {
namespace api {
namespace client {

class Request_RegisterStruct : public Object {
public:
    Request_RegisterStruct();
    Request_RegisterStruct(QString json);
    ~Request_RegisterStruct() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getAppId() const;
    void setAppId(const QString &app_id);
    bool is_app_id_Set() const;
    bool is_app_id_Valid() const;

    QString getArch() const;
    void setArch(const QString &arch);
    bool is_arch_Set() const;
    bool is_arch_Valid() const;

    QString getChannel() const;
    void setChannel(const QString &channel);
    bool is_channel_Set() const;
    bool is_channel_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    QString getKind() const;
    void setKind(const QString &kind);
    bool is_kind_Set() const;
    bool is_kind_Valid() const;

    QString getModule() const;
    void setModule(const QString &module);
    bool is_module_Set() const;
    bool is_module_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QString getRepoName() const;
    void setRepoName(const QString &repo_name);
    bool is_repo_name_Set() const;
    bool is_repo_name_Valid() const;

    QString getRuntime() const;
    void setRuntime(const QString &runtime);
    bool is_runtime_Set() const;
    bool is_runtime_Valid() const;

    qint32 getSize() const;
    void setSize(const qint32 &size);
    bool is_size_Set() const;
    bool is_size_Valid() const;

    QString getUabUrl() const;
    void setUabUrl(const QString &uab_url);
    bool is_uab_url_Set() const;
    bool is_uab_url_Valid() const;

    QString getVersion() const;
    void setVersion(const QString &version);
    bool is_version_Set() const;
    bool is_version_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_app_id;
    bool m_app_id_isSet;
    bool m_app_id_isValid;

    QString m_arch;
    bool m_arch_isSet;
    bool m_arch_isValid;

    QString m_channel;
    bool m_channel_isSet;
    bool m_channel_isValid;

    QString m_description;
    bool m_description_isSet;
    bool m_description_isValid;

    QString m_kind;
    bool m_kind_isSet;
    bool m_kind_isValid;

    QString m_module;
    bool m_module_isSet;
    bool m_module_isValid;

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    QString m_repo_name;
    bool m_repo_name_isSet;
    bool m_repo_name_isValid;

    QString m_runtime;
    bool m_runtime_isSet;
    bool m_runtime_isValid;

    qint32 m_size;
    bool m_size_isSet;
    bool m_size_isValid;

    QString m_uab_url;
    bool m_uab_url_isSet;
    bool m_uab_url_isValid;

    QString m_version;
    bool m_version_isSet;
    bool m_version_isValid;
};

} // namespace linglong
} // namespace api
} // namespace client

Q_DECLARE_METATYPE(linglong::api::client::Request_RegisterStruct)

#endif // Request_RegisterStruct_H
