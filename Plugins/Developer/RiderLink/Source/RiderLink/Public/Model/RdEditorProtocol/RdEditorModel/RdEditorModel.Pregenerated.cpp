//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a RdGen v1.11.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "RdEditorModel.Pregenerated.h"


#include "RdEditorRoot/RdEditorRoot.Pregenerated.h"

#ifdef _MSC_VER
#pragma warning( push )
#pragma warning( disable:4250 )
#pragma warning( disable:4307 )
#pragma warning( disable:4267 )
#pragma warning( disable:4244 )
#pragma warning( disable:4100 )
#endif

namespace JetBrains {
namespace EditorPlugin {
// companion

RdEditorModel::RdEditorModelSerializersOwner const RdEditorModel::serializersOwner;

void RdEditorModel::RdEditorModelSerializersOwner::registerSerializersCore(rd::Serializers const& serializers) const
{
}

void RdEditorModel::connect(rd::Lifetime lifetime, rd::IProtocol const * protocol)
{
    RdEditorRoot::serializersOwner.registry(protocol->get_serializers());
    
    identify(*(protocol->get_identity()), rd::RdId::Null().mix("RdEditorModel"));
    bind(lifetime, protocol, "RdEditorModel");
}

// constants
// initializer
void RdEditorModel::initialize()
{
    connectionInfo_.optimize_nested = true;
    isGameControlModuleInitialized_.optimize_nested = true;
    isHotReloadAvailable_.optimize_nested = true;
    isHotReloadCompiling_.optimize_nested = true;
    unrealLog_.async = true;
    onBlueprintAdded_.async = true;
    serializationHash = 1524974364251396963L;
}
// primary ctor
RdEditorModel::RdEditorModel(rd::RdProperty<ConnectionInfo, rd::Polymorphic<ConnectionInfo>> connectionInfo_, rd::RdSignal<UnrealLogEvent, rd::Polymorphic<UnrealLogEvent>> unrealLog_, rd::RdSignal<BlueprintReference, rd::Polymorphic<BlueprintReference>> openBlueprint_, rd::RdSignal<UClass, rd::Polymorphic<UClass>> onBlueprintAdded_, rd::RdEndpoint<FString, bool, rd::Polymorphic<FString>, rd::Polymorphic<bool>> isBlueprintPathName_, rd::RdEndpoint<FString, rd::optional<FString>, rd::Polymorphic<FString>, RdEditorModel::__FStringNullableSerializer> getPathNameByPath_, rd::RdCall<int32_t, bool, rd::Polymorphic<int32_t>, rd::Polymorphic<bool>> allowSetForegroundWindow_, rd::RdProperty<bool, rd::Polymorphic<bool>> isGameControlModuleInitialized_, rd::RdSignal<PlayState, rd::Polymorphic<PlayState>> playStateFromEditor_, rd::RdSignal<int32_t, rd::Polymorphic<int32_t>> requestPlayFromRider_, rd::RdSignal<int32_t, rd::Polymorphic<int32_t>> requestPauseFromRider_, rd::RdSignal<int32_t, rd::Polymorphic<int32_t>> requestResumeFromRider_, rd::RdSignal<int32_t, rd::Polymorphic<int32_t>> requestStopFromRider_, rd::RdSignal<int32_t, rd::Polymorphic<int32_t>> requestFrameSkipFromRider_, rd::RdSignal<RequestResultBase, rd::AbstractPolymorphic<RequestResultBase>> notificationReplyFromEditor_, rd::RdSignal<int32_t, rd::Polymorphic<int32_t>> playModeFromEditor_, rd::RdSignal<int32_t, rd::Polymorphic<int32_t>> playModeFromRider_, rd::RdProperty<bool, rd::Polymorphic<bool>> isHotReloadAvailable_, rd::RdProperty<bool, rd::Polymorphic<bool>> isHotReloadCompiling_, rd::RdSignal<rd::Void, rd::Polymorphic<rd::Void>> triggerHotReload_) :
rd::RdExtBase()
,connectionInfo_(std::move(connectionInfo_)), unrealLog_(std::move(unrealLog_)), openBlueprint_(std::move(openBlueprint_)), onBlueprintAdded_(std::move(onBlueprintAdded_)), isBlueprintPathName_(std::move(isBlueprintPathName_)), getPathNameByPath_(std::move(getPathNameByPath_)), allowSetForegroundWindow_(std::move(allowSetForegroundWindow_)), isGameControlModuleInitialized_(std::move(isGameControlModuleInitialized_)), playStateFromEditor_(std::move(playStateFromEditor_)), requestPlayFromRider_(std::move(requestPlayFromRider_)), requestPauseFromRider_(std::move(requestPauseFromRider_)), requestResumeFromRider_(std::move(requestResumeFromRider_)), requestStopFromRider_(std::move(requestStopFromRider_)), requestFrameSkipFromRider_(std::move(requestFrameSkipFromRider_)), notificationReplyFromEditor_(std::move(notificationReplyFromEditor_)), playModeFromEditor_(std::move(playModeFromEditor_)), playModeFromRider_(std::move(playModeFromRider_)), isHotReloadAvailable_(std::move(isHotReloadAvailable_)), isHotReloadCompiling_(std::move(isHotReloadCompiling_)), triggerHotReload_(std::move(triggerHotReload_))
{
    initialize();
}
// secondary constructor
// default ctors and dtors
RdEditorModel::RdEditorModel()
{
    initialize();
}
// reader
// writer
// virtual init
void RdEditorModel::init(rd::Lifetime lifetime) const
{
    rd::RdExtBase::init(lifetime);
    bindPolymorphic(connectionInfo_, lifetime, this, "connectionInfo");
    bindPolymorphic(unrealLog_, lifetime, this, "unrealLog");
    bindPolymorphic(openBlueprint_, lifetime, this, "openBlueprint");
    bindPolymorphic(onBlueprintAdded_, lifetime, this, "onBlueprintAdded");
    bindPolymorphic(isBlueprintPathName_, lifetime, this, "isBlueprintPathName");
    bindPolymorphic(getPathNameByPath_, lifetime, this, "getPathNameByPath");
    bindPolymorphic(allowSetForegroundWindow_, lifetime, this, "allowSetForegroundWindow");
    bindPolymorphic(isGameControlModuleInitialized_, lifetime, this, "isGameControlModuleInitialized");
    bindPolymorphic(playStateFromEditor_, lifetime, this, "playStateFromEditor");
    bindPolymorphic(requestPlayFromRider_, lifetime, this, "requestPlayFromRider");
    bindPolymorphic(requestPauseFromRider_, lifetime, this, "requestPauseFromRider");
    bindPolymorphic(requestResumeFromRider_, lifetime, this, "requestResumeFromRider");
    bindPolymorphic(requestStopFromRider_, lifetime, this, "requestStopFromRider");
    bindPolymorphic(requestFrameSkipFromRider_, lifetime, this, "requestFrameSkipFromRider");
    bindPolymorphic(notificationReplyFromEditor_, lifetime, this, "notificationReplyFromEditor");
    bindPolymorphic(playModeFromEditor_, lifetime, this, "playModeFromEditor");
    bindPolymorphic(playModeFromRider_, lifetime, this, "playModeFromRider");
    bindPolymorphic(isHotReloadAvailable_, lifetime, this, "isHotReloadAvailable");
    bindPolymorphic(isHotReloadCompiling_, lifetime, this, "isHotReloadCompiling");
    bindPolymorphic(triggerHotReload_, lifetime, this, "triggerHotReload");
}
// identify
void RdEditorModel::identify(const rd::Identities &identities, rd::RdId const &id) const
{
    rd::RdBindableBase::identify(identities, id);
    identifyPolymorphic(connectionInfo_, identities, id.mix(".connectionInfo"));
    identifyPolymorphic(unrealLog_, identities, id.mix(".unrealLog"));
    identifyPolymorphic(openBlueprint_, identities, id.mix(".openBlueprint"));
    identifyPolymorphic(onBlueprintAdded_, identities, id.mix(".onBlueprintAdded"));
    identifyPolymorphic(isBlueprintPathName_, identities, id.mix(".isBlueprintPathName"));
    identifyPolymorphic(getPathNameByPath_, identities, id.mix(".getPathNameByPath"));
    identifyPolymorphic(allowSetForegroundWindow_, identities, id.mix(".allowSetForegroundWindow"));
    identifyPolymorphic(isGameControlModuleInitialized_, identities, id.mix(".isGameControlModuleInitialized"));
    identifyPolymorphic(playStateFromEditor_, identities, id.mix(".playStateFromEditor"));
    identifyPolymorphic(requestPlayFromRider_, identities, id.mix(".requestPlayFromRider"));
    identifyPolymorphic(requestPauseFromRider_, identities, id.mix(".requestPauseFromRider"));
    identifyPolymorphic(requestResumeFromRider_, identities, id.mix(".requestResumeFromRider"));
    identifyPolymorphic(requestStopFromRider_, identities, id.mix(".requestStopFromRider"));
    identifyPolymorphic(requestFrameSkipFromRider_, identities, id.mix(".requestFrameSkipFromRider"));
    identifyPolymorphic(notificationReplyFromEditor_, identities, id.mix(".notificationReplyFromEditor"));
    identifyPolymorphic(playModeFromEditor_, identities, id.mix(".playModeFromEditor"));
    identifyPolymorphic(playModeFromRider_, identities, id.mix(".playModeFromRider"));
    identifyPolymorphic(isHotReloadAvailable_, identities, id.mix(".isHotReloadAvailable"));
    identifyPolymorphic(isHotReloadCompiling_, identities, id.mix(".isHotReloadCompiling"));
    identifyPolymorphic(triggerHotReload_, identities, id.mix(".triggerHotReload"));
}
// getters
rd::IProperty<ConnectionInfo> const & RdEditorModel::get_connectionInfo() const
{
    return connectionInfo_;
}
rd::ISignal<UnrealLogEvent> const & RdEditorModel::get_unrealLog() const
{
    return unrealLog_;
}
rd::ISignal<BlueprintReference> const & RdEditorModel::get_openBlueprint() const
{
    return openBlueprint_;
}
rd::ISignal<UClass> const & RdEditorModel::get_onBlueprintAdded() const
{
    return onBlueprintAdded_;
}
rd::RdEndpoint<FString, bool, rd::Polymorphic<FString>, rd::Polymorphic<bool>> const & RdEditorModel::get_isBlueprintPathName() const
{
    return isBlueprintPathName_;
}
rd::RdEndpoint<FString, rd::optional<FString>, rd::Polymorphic<FString>, RdEditorModel::__FStringNullableSerializer> const & RdEditorModel::get_getPathNameByPath() const
{
    return getPathNameByPath_;
}
rd::RdCall<int32_t, bool, rd::Polymorphic<int32_t>, rd::Polymorphic<bool>> const & RdEditorModel::get_allowSetForegroundWindow() const
{
    return allowSetForegroundWindow_;
}
rd::IProperty<bool> const & RdEditorModel::get_isGameControlModuleInitialized() const
{
    return isGameControlModuleInitialized_;
}
rd::ISignal<PlayState> const & RdEditorModel::get_playStateFromEditor() const
{
    return playStateFromEditor_;
}
rd::ISource<int32_t> const & RdEditorModel::get_requestPlayFromRider() const
{
    return requestPlayFromRider_;
}
rd::ISource<int32_t> const & RdEditorModel::get_requestPauseFromRider() const
{
    return requestPauseFromRider_;
}
rd::ISource<int32_t> const & RdEditorModel::get_requestResumeFromRider() const
{
    return requestResumeFromRider_;
}
rd::ISource<int32_t> const & RdEditorModel::get_requestStopFromRider() const
{
    return requestStopFromRider_;
}
rd::ISource<int32_t> const & RdEditorModel::get_requestFrameSkipFromRider() const
{
    return requestFrameSkipFromRider_;
}
rd::ISignal<RequestResultBase> const & RdEditorModel::get_notificationReplyFromEditor() const
{
    return notificationReplyFromEditor_;
}
rd::ISignal<int32_t> const & RdEditorModel::get_playModeFromEditor() const
{
    return playModeFromEditor_;
}
rd::ISource<int32_t> const & RdEditorModel::get_playModeFromRider() const
{
    return playModeFromRider_;
}
rd::IProperty<bool> const & RdEditorModel::get_isHotReloadAvailable() const
{
    return isHotReloadAvailable_;
}
rd::IProperty<bool> const & RdEditorModel::get_isHotReloadCompiling() const
{
    return isHotReloadCompiling_;
}
rd::ISource<rd::Void> const & RdEditorModel::get_triggerHotReload() const
{
    return triggerHotReload_;
}
// intern
// equals trait
// equality operators
bool operator==(const RdEditorModel &lhs, const RdEditorModel &rhs) {
    return &lhs == &rhs;
}
bool operator!=(const RdEditorModel &lhs, const RdEditorModel &rhs){
    return !(lhs == rhs);
}
// hash code trait
// type name trait
// static type name trait
// polymorphic to string
std::string RdEditorModel::toString() const
{
    std::string res = "RdEditorModel\n";
    res += "\tconnectionInfo = ";
    res += rd::to_string(connectionInfo_);
    res += '\n';
    res += "\tunrealLog = ";
    res += rd::to_string(unrealLog_);
    res += '\n';
    res += "\topenBlueprint = ";
    res += rd::to_string(openBlueprint_);
    res += '\n';
    res += "\tonBlueprintAdded = ";
    res += rd::to_string(onBlueprintAdded_);
    res += '\n';
    res += "\tisBlueprintPathName = ";
    res += rd::to_string(isBlueprintPathName_);
    res += '\n';
    res += "\tgetPathNameByPath = ";
    res += rd::to_string(getPathNameByPath_);
    res += '\n';
    res += "\tallowSetForegroundWindow = ";
    res += rd::to_string(allowSetForegroundWindow_);
    res += '\n';
    res += "\tisGameControlModuleInitialized = ";
    res += rd::to_string(isGameControlModuleInitialized_);
    res += '\n';
    res += "\tplayStateFromEditor = ";
    res += rd::to_string(playStateFromEditor_);
    res += '\n';
    res += "\trequestPlayFromRider = ";
    res += rd::to_string(requestPlayFromRider_);
    res += '\n';
    res += "\trequestPauseFromRider = ";
    res += rd::to_string(requestPauseFromRider_);
    res += '\n';
    res += "\trequestResumeFromRider = ";
    res += rd::to_string(requestResumeFromRider_);
    res += '\n';
    res += "\trequestStopFromRider = ";
    res += rd::to_string(requestStopFromRider_);
    res += '\n';
    res += "\trequestFrameSkipFromRider = ";
    res += rd::to_string(requestFrameSkipFromRider_);
    res += '\n';
    res += "\tnotificationReplyFromEditor = ";
    res += rd::to_string(notificationReplyFromEditor_);
    res += '\n';
    res += "\tplayModeFromEditor = ";
    res += rd::to_string(playModeFromEditor_);
    res += '\n';
    res += "\tplayModeFromRider = ";
    res += rd::to_string(playModeFromRider_);
    res += '\n';
    res += "\tisHotReloadAvailable = ";
    res += rd::to_string(isHotReloadAvailable_);
    res += '\n';
    res += "\tisHotReloadCompiling = ";
    res += rd::to_string(isHotReloadCompiling_);
    res += '\n';
    res += "\ttriggerHotReload = ";
    res += rd::to_string(triggerHotReload_);
    res += '\n';
    return res;
}
// external to string
std::string to_string(const RdEditorModel & value)
{
    return value.toString();
}
}
}

#ifdef _MSC_VER
#pragma warning( pop )
#endif

