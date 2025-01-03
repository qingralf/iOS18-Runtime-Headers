/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ORCHSchemaORCHClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    ORCHSchemaORCHAceCommandContext * _aceCommandContext;
    ORCHSchemaORCHASRBridgeContext * _asrBridgeContext;
    ORCHSchemaORCHAssetSetsReported * _assetSetsReported;
    ORCHSchemaORCHAssistantDaemonLaunchMetadataReported * _assistantdLaunchMetadataReported;
    ORCHSchemaORCHAssetsReported * _availableAssets;
    ORCHSchemaORCHCandidateRequestContext * _candidateRequestContext;
    ORCHSchemaORCHCDMBridgeContext * _cdmBridgeContext;
    ORCHSchemaORCHConversationContextSubmitted * _contextSubmissionMessage;
    ORCHSchemaORCHClientEventMetadata * _eventMetadata;
    ORCHSchemaORCHExecuteOnRemoteRequestContext * _executeOnRemoteRequestContext;
    ORCHSchemaORCHExecutionBridgeContext * _executionBridgeContext;
    ORCHSchemaORCHFlowOutputSubmitted * _flowOutputSubmitted;
    bool  _hasAceCommandContext;
    bool  _hasAsrBridgeContext;
    bool  _hasAssetSetsReported;
    bool  _hasAssistantdLaunchMetadataReported;
    bool  _hasAvailableAssets;
    bool  _hasCandidateRequestContext;
    bool  _hasCdmBridgeContext;
    bool  _hasContextSubmissionMessage;
    bool  _hasEventMetadata;
    bool  _hasExecuteOnRemoteRequestContext;
    bool  _hasExecutionBridgeContext;
    bool  _hasFlowOutputSubmitted;
    bool  _hasIdentityBridgeRequestContext;
    bool  _hasIntelligenceFlowQuerySent;
    bool  _hasMultiUserResultCandidate;
    bool  _hasMultiUserResultSelected;
    bool  _hasMuxBridgeContext;
    bool  _hasNlRouterBridgeContext;
    bool  _hasNlRouterBridgeSubComponentContext;
    bool  _hasNlv3ServerFallbackDeprecated;
    bool  _hasOrchDeviceDynamicContext;
    bool  _hasPommesBridgeContext;
    bool  _hasPowerContextPolicyReported;
    bool  _hasRequestContext;
    bool  _hasRequestMitigated;
    bool  _hasResourceUtilizationMetadata;
    bool  _hasResultCandidate;
    bool  _hasResultSelected;
    bool  _hasRouterRewrittenUtterance;
    bool  _hasServerFallbackContext;
    bool  _hasShimToolContext;
    bool  _hasSubRequestContext;
    bool  _hasSubRequestFallback;
    bool  _hasTrpCandidateCreated;
    bool  _hasTrpCandidateReceived;
    bool  _hasTrpFinalized;
    bool  _hasUiActivationContext;
    bool  _hasUnsupportedLanguageDetected;
    ORCHSchemaORCHIdentityBridgeRequestContext * _identityBridgeRequestContext;
    ORCHSchemaORCHIntelligenceFlowQuerySent * _intelligenceFlowQuerySent;
    ORCHSchemaORCHMultiUserResultCandidateReceived * _multiUserResultCandidate;
    ORCHSchemaORCHMultiUserResultCandidateSelected * _multiUserResultSelected;
    ORCHSchemaORCHMUXBridgeContext * _muxBridgeContext;
    ORCHSchemaORCHNLRouterBridgeContext * _nlRouterBridgeContext;
    ORCHSchemaORCHNLRouterBridgeSubComponentContext * _nlRouterBridgeSubComponentContext;
    ORCHSchemaORCHNLV3ServerFallbackDeprecated * _nlv3ServerFallbackDeprecated;
    ORCHSchemaORCHDeviceDynamicContext * _orchDeviceDynamicContext;
    ORCHSchemaORCHPommesBridgeContext * _pommesBridgeContext;
    ORCHSchemaORCHPowerContextPolicyReported * _powerContextPolicyReported;
    ORCHSchemaORCHRequestContext * _requestContext;
    ORCHSchemaORCHRequestMitigated * _requestMitigated;
    ORCHSchemaORCHResourceUtilizationMetadata * _resourceUtilizationMetadata;
    ORCHSchemaORCHResultCandidateReceived * _resultCandidate;
    ORCHSchemaORCHResultSelected * _resultSelected;
    ORCHSchemaNLRouterRewrittenUtteranceTier1 * _routerRewrittenUtterance;
    ORCHSchemaORCHServerFallbackContext * _serverFallbackContext;
    ORCHSchemaORCHShimToolContext * _shimToolContext;
    ORCHSchemaORCHSubRequestContext * _subRequestContext;
    ORCHSchemaORCHIntelligenceFlowSubRequestFallback * _subRequestFallback;
    ORCHSchemaORCHTRPCandidateCreated * _trpCandidateCreated;
    ORCHSchemaORCHTRPCandidateReceived * _trpCandidateReceived;
    ORCHSchemaORCHTRPFinalized * _trpFinalized;
    ORCHSchemaORCHUIActivationContext * _uiActivationContext;
    ORCHSchemaORCHUnsupportedLanguageDetected * _unsupportedLanguageDetected;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) ORCHSchemaORCHAceCommandContext *aceCommandContext;
@property (nonatomic, retain) ORCHSchemaORCHASRBridgeContext *asrBridgeContext;
@property (nonatomic, retain) ORCHSchemaORCHAssetSetsReported *assetSetsReported;
@property (nonatomic, retain) ORCHSchemaORCHAssistantDaemonLaunchMetadataReported *assistantdLaunchMetadataReported;
@property (nonatomic, retain) ORCHSchemaORCHAssetsReported *availableAssets;
@property (nonatomic, retain) ORCHSchemaORCHCandidateRequestContext *candidateRequestContext;
@property (nonatomic, retain) ORCHSchemaORCHCDMBridgeContext *cdmBridgeContext;
@property (nonatomic, retain) ORCHSchemaORCHConversationContextSubmitted *contextSubmissionMessage;
@property (nonatomic, retain) ORCHSchemaORCHClientEventMetadata *eventMetadata;
@property (nonatomic, retain) ORCHSchemaORCHExecuteOnRemoteRequestContext *executeOnRemoteRequestContext;
@property (nonatomic, retain) ORCHSchemaORCHExecutionBridgeContext *executionBridgeContext;
@property (nonatomic, retain) ORCHSchemaORCHFlowOutputSubmitted *flowOutputSubmitted;
@property (nonatomic) bool hasAceCommandContext;
@property (nonatomic) bool hasAsrBridgeContext;
@property (nonatomic) bool hasAssetSetsReported;
@property (nonatomic) bool hasAssistantdLaunchMetadataReported;
@property (nonatomic) bool hasAvailableAssets;
@property (nonatomic) bool hasCandidateRequestContext;
@property (nonatomic) bool hasCdmBridgeContext;
@property (nonatomic) bool hasContextSubmissionMessage;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasExecuteOnRemoteRequestContext;
@property (nonatomic) bool hasExecutionBridgeContext;
@property (nonatomic) bool hasFlowOutputSubmitted;
@property (nonatomic) bool hasIdentityBridgeRequestContext;
@property (nonatomic) bool hasIntelligenceFlowQuerySent;
@property (nonatomic) bool hasMultiUserResultCandidate;
@property (nonatomic) bool hasMultiUserResultSelected;
@property (nonatomic) bool hasMuxBridgeContext;
@property (nonatomic) bool hasNlRouterBridgeContext;
@property (nonatomic) bool hasNlRouterBridgeSubComponentContext;
@property (nonatomic) bool hasNlv3ServerFallbackDeprecated;
@property (nonatomic) bool hasOrchDeviceDynamicContext;
@property (nonatomic) bool hasPommesBridgeContext;
@property (nonatomic) bool hasPowerContextPolicyReported;
@property (nonatomic) bool hasRequestContext;
@property (nonatomic) bool hasRequestMitigated;
@property (nonatomic) bool hasResourceUtilizationMetadata;
@property (nonatomic) bool hasResultCandidate;
@property (nonatomic) bool hasResultSelected;
@property (nonatomic) bool hasRouterRewrittenUtterance;
@property (nonatomic) bool hasServerFallbackContext;
@property (nonatomic) bool hasShimToolContext;
@property (nonatomic) bool hasSubRequestContext;
@property (nonatomic) bool hasSubRequestFallback;
@property (nonatomic) bool hasTrpCandidateCreated;
@property (nonatomic) bool hasTrpCandidateReceived;
@property (nonatomic) bool hasTrpFinalized;
@property (nonatomic) bool hasUiActivationContext;
@property (nonatomic) bool hasUnsupportedLanguageDetected;
@property (nonatomic, retain) ORCHSchemaORCHIdentityBridgeRequestContext *identityBridgeRequestContext;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, retain) ORCHSchemaORCHIntelligenceFlowQuerySent *intelligenceFlowQuerySent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) ORCHSchemaORCHMultiUserResultCandidateReceived *multiUserResultCandidate;
@property (nonatomic, retain) ORCHSchemaORCHMultiUserResultCandidateSelected *multiUserResultSelected;
@property (nonatomic, retain) ORCHSchemaORCHMUXBridgeContext *muxBridgeContext;
@property (nonatomic, retain) ORCHSchemaORCHNLRouterBridgeContext *nlRouterBridgeContext;
@property (nonatomic, retain) ORCHSchemaORCHNLRouterBridgeSubComponentContext *nlRouterBridgeSubComponentContext;
@property (nonatomic, retain) ORCHSchemaORCHNLV3ServerFallbackDeprecated *nlv3ServerFallbackDeprecated;
@property (nonatomic, retain) ORCHSchemaORCHDeviceDynamicContext *orchDeviceDynamicContext;
@property (nonatomic, retain) ORCHSchemaORCHPommesBridgeContext *pommesBridgeContext;
@property (nonatomic, retain) ORCHSchemaORCHPowerContextPolicyReported *powerContextPolicyReported;
@property (nonatomic, retain) ORCHSchemaORCHRequestContext *requestContext;
@property (nonatomic, retain) ORCHSchemaORCHRequestMitigated *requestMitigated;
@property (nonatomic, retain) ORCHSchemaORCHResourceUtilizationMetadata *resourceUtilizationMetadata;
@property (nonatomic, retain) ORCHSchemaORCHResultCandidateReceived *resultCandidate;
@property (nonatomic, retain) ORCHSchemaORCHResultSelected *resultSelected;
@property (nonatomic, retain) ORCHSchemaNLRouterRewrittenUtteranceTier1 *routerRewrittenUtterance;
@property (nonatomic, retain) ORCHSchemaORCHServerFallbackContext *serverFallbackContext;
@property (nonatomic, retain) ORCHSchemaORCHShimToolContext *shimToolContext;
@property (nonatomic, retain) ORCHSchemaORCHSubRequestContext *subRequestContext;
@property (nonatomic, retain) ORCHSchemaORCHIntelligenceFlowSubRequestFallback *subRequestFallback;
@property (nonatomic, retain) ORCHSchemaORCHTRPCandidateCreated *trpCandidateCreated;
@property (nonatomic, retain) ORCHSchemaORCHTRPCandidateReceived *trpCandidateReceived;
@property (nonatomic, retain) ORCHSchemaORCHTRPFinalized *trpFinalized;
@property (nonatomic, retain) ORCHSchemaORCHUIActivationContext *uiActivationContext;
@property (nonatomic, retain) ORCHSchemaORCHUnsupportedLanguageDetected *unsupportedLanguageDetected;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)arg1;
+ (int)joinability;

- (void).cxx_destruct;
- (id)aceCommandContext;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)asrBridgeContext;
- (id)assetSetsReported;
- (id)assistantdLaunchMetadataReported;
- (id)availableAssets;
- (id)candidateRequestContext;
- (id)cdmBridgeContext;
- (int)componentName;
- (id)contextSubmissionMessage;
- (void)deleteAceCommandContext;
- (void)deleteAsrBridgeContext;
- (void)deleteAssetSetsReported;
- (void)deleteAssistantdLaunchMetadataReported;
- (void)deleteAvailableAssets;
- (void)deleteCandidateRequestContext;
- (void)deleteCdmBridgeContext;
- (void)deleteContextSubmissionMessage;
- (void)deleteEventMetadata;
- (void)deleteExecuteOnRemoteRequestContext;
- (void)deleteExecutionBridgeContext;
- (void)deleteFlowOutputSubmitted;
- (void)deleteIdentityBridgeRequestContext;
- (void)deleteIntelligenceFlowQuerySent;
- (void)deleteMultiUserResultCandidate;
- (void)deleteMultiUserResultSelected;
- (void)deleteMuxBridgeContext;
- (void)deleteNlRouterBridgeContext;
- (void)deleteNlRouterBridgeSubComponentContext;
- (void)deleteNlv3ServerFallbackDeprecated;
- (void)deleteOrchDeviceDynamicContext;
- (void)deletePommesBridgeContext;
- (void)deletePowerContextPolicyReported;
- (void)deleteRequestContext;
- (void)deleteRequestMitigated;
- (void)deleteResourceUtilizationMetadata;
- (void)deleteResultCandidate;
- (void)deleteResultSelected;
- (void)deleteRouterRewrittenUtterance;
- (void)deleteServerFallbackContext;
- (void)deleteShimToolContext;
- (void)deleteSubRequestContext;
- (void)deleteSubRequestFallback;
- (void)deleteTrpCandidateCreated;
- (void)deleteTrpCandidateReceived;
- (void)deleteTrpFinalized;
- (void)deleteUiActivationContext;
- (void)deleteUnsupportedLanguageDetected;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (id)executeOnRemoteRequestContext;
- (id)executionBridgeContext;
- (id)flowOutputSubmitted;
- (int)getAnyEventType;
- (id)getComponentId;
- (bool)hasAceCommandContext;
- (bool)hasAsrBridgeContext;
- (bool)hasAssetSetsReported;
- (bool)hasAssistantdLaunchMetadataReported;
- (bool)hasAvailableAssets;
- (bool)hasCandidateRequestContext;
- (bool)hasCdmBridgeContext;
- (bool)hasContextSubmissionMessage;
- (bool)hasEventMetadata;
- (bool)hasExecuteOnRemoteRequestContext;
- (bool)hasExecutionBridgeContext;
- (bool)hasFlowOutputSubmitted;
- (bool)hasIdentityBridgeRequestContext;
- (bool)hasIntelligenceFlowQuerySent;
- (bool)hasMultiUserResultCandidate;
- (bool)hasMultiUserResultSelected;
- (bool)hasMuxBridgeContext;
- (bool)hasNlRouterBridgeContext;
- (bool)hasNlRouterBridgeSubComponentContext;
- (bool)hasNlv3ServerFallbackDeprecated;
- (bool)hasOrchDeviceDynamicContext;
- (bool)hasPommesBridgeContext;
- (bool)hasPowerContextPolicyReported;
- (bool)hasRequestContext;
- (bool)hasRequestMitigated;
- (bool)hasResourceUtilizationMetadata;
- (bool)hasResultCandidate;
- (bool)hasResultSelected;
- (bool)hasRouterRewrittenUtterance;
- (bool)hasServerFallbackContext;
- (bool)hasShimToolContext;
- (bool)hasSubRequestContext;
- (bool)hasSubRequestFallback;
- (bool)hasTrpCandidateCreated;
- (bool)hasTrpCandidateReceived;
- (bool)hasTrpFinalized;
- (bool)hasUiActivationContext;
- (bool)hasUnsupportedLanguageDetected;
- (unsigned long long)hash;
- (id)identityBridgeRequestContext;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (id)intelligenceFlowQuerySent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)multiUserResultCandidate;
- (id)multiUserResultSelected;
- (id)muxBridgeContext;
- (id)nlRouterBridgeContext;
- (id)nlRouterBridgeSubComponentContext;
- (id)nlv3ServerFallbackDeprecated;
- (id)orchDeviceDynamicContext;
- (id)pommesBridgeContext;
- (id)powerContextPolicyReported;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (id)requestContext;
- (id)requestMitigated;
- (id)resourceUtilizationMetadata;
- (id)resultCandidate;
- (id)resultSelected;
- (id)routerRewrittenUtterance;
- (id)serverFallbackContext;
- (void)setAceCommandContext:(id)arg1;
- (void)setAsrBridgeContext:(id)arg1;
- (void)setAssetSetsReported:(id)arg1;
- (void)setAssistantdLaunchMetadataReported:(id)arg1;
- (void)setAvailableAssets:(id)arg1;
- (void)setCandidateRequestContext:(id)arg1;
- (void)setCdmBridgeContext:(id)arg1;
- (void)setContextSubmissionMessage:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setExecuteOnRemoteRequestContext:(id)arg1;
- (void)setExecutionBridgeContext:(id)arg1;
- (void)setFlowOutputSubmitted:(id)arg1;
- (void)setHasAceCommandContext:(bool)arg1;
- (void)setHasAsrBridgeContext:(bool)arg1;
- (void)setHasAssetSetsReported:(bool)arg1;
- (void)setHasAssistantdLaunchMetadataReported:(bool)arg1;
- (void)setHasAvailableAssets:(bool)arg1;
- (void)setHasCandidateRequestContext:(bool)arg1;
- (void)setHasCdmBridgeContext:(bool)arg1;
- (void)setHasContextSubmissionMessage:(bool)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasExecuteOnRemoteRequestContext:(bool)arg1;
- (void)setHasExecutionBridgeContext:(bool)arg1;
- (void)setHasFlowOutputSubmitted:(bool)arg1;
- (void)setHasIdentityBridgeRequestContext:(bool)arg1;
- (void)setHasIntelligenceFlowQuerySent:(bool)arg1;
- (void)setHasMultiUserResultCandidate:(bool)arg1;
- (void)setHasMultiUserResultSelected:(bool)arg1;
- (void)setHasMuxBridgeContext:(bool)arg1;
- (void)setHasNlRouterBridgeContext:(bool)arg1;
- (void)setHasNlRouterBridgeSubComponentContext:(bool)arg1;
- (void)setHasNlv3ServerFallbackDeprecated:(bool)arg1;
- (void)setHasOrchDeviceDynamicContext:(bool)arg1;
- (void)setHasPommesBridgeContext:(bool)arg1;
- (void)setHasPowerContextPolicyReported:(bool)arg1;
- (void)setHasRequestContext:(bool)arg1;
- (void)setHasRequestMitigated:(bool)arg1;
- (void)setHasResourceUtilizationMetadata:(bool)arg1;
- (void)setHasResultCandidate:(bool)arg1;
- (void)setHasResultSelected:(bool)arg1;
- (void)setHasRouterRewrittenUtterance:(bool)arg1;
- (void)setHasServerFallbackContext:(bool)arg1;
- (void)setHasShimToolContext:(bool)arg1;
- (void)setHasSubRequestContext:(bool)arg1;
- (void)setHasSubRequestFallback:(bool)arg1;
- (void)setHasTrpCandidateCreated:(bool)arg1;
- (void)setHasTrpCandidateReceived:(bool)arg1;
- (void)setHasTrpFinalized:(bool)arg1;
- (void)setHasUiActivationContext:(bool)arg1;
- (void)setHasUnsupportedLanguageDetected:(bool)arg1;
- (void)setIdentityBridgeRequestContext:(id)arg1;
- (void)setIntelligenceFlowQuerySent:(id)arg1;
- (void)setMultiUserResultCandidate:(id)arg1;
- (void)setMultiUserResultSelected:(id)arg1;
- (void)setMuxBridgeContext:(id)arg1;
- (void)setNlRouterBridgeContext:(id)arg1;
- (void)setNlRouterBridgeSubComponentContext:(id)arg1;
- (void)setNlv3ServerFallbackDeprecated:(id)arg1;
- (void)setOrchDeviceDynamicContext:(id)arg1;
- (void)setPommesBridgeContext:(id)arg1;
- (void)setPowerContextPolicyReported:(id)arg1;
- (void)setRequestContext:(id)arg1;
- (void)setRequestMitigated:(id)arg1;
- (void)setResourceUtilizationMetadata:(id)arg1;
- (void)setResultCandidate:(id)arg1;
- (void)setResultSelected:(id)arg1;
- (void)setRouterRewrittenUtterance:(id)arg1;
- (void)setServerFallbackContext:(id)arg1;
- (void)setShimToolContext:(id)arg1;
- (void)setSubRequestContext:(id)arg1;
- (void)setSubRequestFallback:(id)arg1;
- (void)setTrpCandidateCreated:(id)arg1;
- (void)setTrpCandidateReceived:(id)arg1;
- (void)setTrpFinalized:(id)arg1;
- (void)setUiActivationContext:(id)arg1;
- (void)setUnsupportedLanguageDetected:(id)arg1;
- (id)shimToolContext;
- (id)subRequestContext;
- (id)subRequestFallback;
- (id)suppressMessageUnderConditions;
- (id)trpCandidateCreated;
- (id)trpCandidateReceived;
- (id)trpFinalized;
- (id)uiActivationContext;
- (id)unsupportedLanguageDetected;
- (unsigned long long)whichEvent_Type;
- (unsigned long long)whichInnerEventType;
- (void)writeTo:(id)arg1;

@end
