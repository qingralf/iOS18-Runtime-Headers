/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface NLXSchemaNLXClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    NLXSchemaCDMAllServicesSetupContext * _cdmAllServicesSetupContext;
    NLXSchemaCDMAllServicesWarmupContext * _cdmAllServicesWarmupContext;
    NLXSchemaCDMAssetSetupContext * _cdmAssetSetupContext;
    NLXSchemaCDMAssetsReported * _cdmAssetsReported;
    NLXSchemaCDMClientSetupContext * _cdmClientSetupContext;
    NLXSchemaCDMClientWarmupContext * _cdmClientWarmupContext;
    NLXSchemaCDMContextUpdateEnded * _cdmContextUpdateEnded;
    NLXSchemaCDMDelegatedUserDialogActTier1 * _cdmDelegatedUserDialogActTier1;
    NLXSchemaCDMMatchingSpanEnded * _cdmMatchingSpanEnded;
    NLXSchemaCDMMatchingSpanEndedTier1 * _cdmMatchingSpanEndedTier1;
    NLXSchemaCDMMatchingSpanTier1 * _cdmMatchingSpanTier1;
    NLXSchemaCDMRequestContext * _cdmRequestContext;
    NLXSchemaCDMServiceContext * _cdmServiceContext;
    NLXSchemaCDMServiceHandleMetricsReported * _cdmServiceHandleMetricsReported;
    NLXSchemaCDMServiceSetupMetricsReported * _cdmServiceSetupMetricsReported;
    NLXSchemaCDMSetupLink * _cdmSetupLink;
    NLXSchemaCDMSetupMissingAssetsDetected * _cdmSetupMissingAssetsDetected;
    NLXSchemaCDMSingleServiceSetupAttemptContext * _cdmSingleServiceSetupAttemptContext;
    NLXSchemaCDMSingleServiceSetupAttemptFailed * _cdmSingleServiceSetupAttemptFailed;
    NLXSchemaCDMSingleServiceWarmupAttemptContext * _cdmSingleServiceWarmupAttemptContext;
    NLXSchemaCDMSingleServiceWarmupAttemptFailed * _cdmSingleServiceWarmupAttemptFailed;
    NLXSchemaCDMSpanMatcherContext * _cdmSpanMatcherContext;
    NLXSchemaCDMSystemDialogActTier1 * _cdmSystemDialogActTier1;
    NLXSchemaCDMTokenizationEnded * _cdmTokenizationEnded;
    NLXSchemaCDMUsoGraphTier1 * _cdmUsoGraphTier1;
    NLXSchemaCDMXPCEventProcessingContext * _cdmXpcEventProcessingContext;
    NLXSchemaNLXClientEventMetadata * _eventMetadata;
    bool  _hasCdmAllServicesSetupContext;
    bool  _hasCdmAllServicesWarmupContext;
    bool  _hasCdmAssetSetupContext;
    bool  _hasCdmAssetsReported;
    bool  _hasCdmClientSetupContext;
    bool  _hasCdmClientWarmupContext;
    bool  _hasCdmContextUpdateEnded;
    bool  _hasCdmDelegatedUserDialogActTier1;
    bool  _hasCdmMatchingSpanEnded;
    bool  _hasCdmMatchingSpanEndedTier1;
    bool  _hasCdmMatchingSpanTier1;
    bool  _hasCdmRequestContext;
    bool  _hasCdmServiceContext;
    bool  _hasCdmServiceHandleMetricsReported;
    bool  _hasCdmServiceSetupMetricsReported;
    bool  _hasCdmSetupLink;
    bool  _hasCdmSetupMissingAssetsDetected;
    bool  _hasCdmSingleServiceSetupAttemptContext;
    bool  _hasCdmSingleServiceSetupAttemptFailed;
    bool  _hasCdmSingleServiceWarmupAttemptContext;
    bool  _hasCdmSingleServiceWarmupAttemptFailed;
    bool  _hasCdmSpanMatcherContext;
    bool  _hasCdmSystemDialogActTier1;
    bool  _hasCdmTokenizationEnded;
    bool  _hasCdmUsoGraphTier1;
    bool  _hasCdmXpcEventProcessingContext;
    bool  _hasEventMetadata;
    bool  _hasMarrsContextualSpanMatcherEnded;
    bool  _hasMarrsContextualSpanMatcherEndedTier1;
    bool  _hasMarrsMentionDetectorEnded;
    bool  _hasMarrsMentionDetectorEndedTier1;
    bool  _hasMarrsMentionResolverEnded;
    bool  _hasMarrsMentionResolverEndedTier1;
    bool  _hasMarrsQueryRewriteContext;
    bool  _hasMarrsQueryRewriteEvaluatedTier1;
    bool  _hasMarrsRepetitionDetectionContext;
    bool  _hasMilAssetAcquisitionContext;
    bool  _hasNlxCurareContext;
    bool  _hasNlxDeviceFixedContext;
    bool  _hasNlxLegacyNLContextTier1;
    bool  _hasSsuBackgroundRequestContext;
    bool  _hasSsuUserRequestContext;
    NLXSchemaMARRSContextualSpanMatcherEnded * _marrsContextualSpanMatcherEnded;
    NLXSchemaMARRSContextualSpanMatcherEndedTier1 * _marrsContextualSpanMatcherEndedTier1;
    NLXSchemaMARRSMentionDetectorEnded * _marrsMentionDetectorEnded;
    NLXSchemaMARRSMentionDetectorEndedTier1 * _marrsMentionDetectorEndedTier1;
    NLXSchemaMARRSMentionResolverEnded * _marrsMentionResolverEnded;
    NLXSchemaMARRSMentionResolverEndedTier1 * _marrsMentionResolverEndedTier1;
    NLXSchemaMARRSQueryRewriteContext * _marrsQueryRewriteContext;
    NLXSchemaMARRSQueryRewriteEvaluatedTier1 * _marrsQueryRewriteEvaluatedTier1;
    NLXSchemaMARRSRepetitionDetectionContext * _marrsRepetitionDetectionContext;
    NLXSchemaMILAssetAcquisitionContext * _milAssetAcquisitionContext;
    NLXSchemaNLXCurareContext * _nlxCurareContext;
    NLXSchemaNLXDeviceFixedContext * _nlxDeviceFixedContext;
    NLXSchemaNLXLegacyNLContextTier1 * _nlxLegacyNLContextTier1;
    NLXSchemaSSUBackgroundUpdateContext * _ssuBackgroundRequestContext;
    NLXSchemaSSUUserRequestContext * _ssuUserRequestContext;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) NLXSchemaCDMAllServicesSetupContext *cdmAllServicesSetupContext;
@property (nonatomic, retain) NLXSchemaCDMAllServicesWarmupContext *cdmAllServicesWarmupContext;
@property (nonatomic, retain) NLXSchemaCDMAssetSetupContext *cdmAssetSetupContext;
@property (nonatomic, retain) NLXSchemaCDMAssetsReported *cdmAssetsReported;
@property (nonatomic, retain) NLXSchemaCDMClientSetupContext *cdmClientSetupContext;
@property (nonatomic, retain) NLXSchemaCDMClientWarmupContext *cdmClientWarmupContext;
@property (nonatomic, retain) NLXSchemaCDMContextUpdateEnded *cdmContextUpdateEnded;
@property (nonatomic, retain) NLXSchemaCDMDelegatedUserDialogActTier1 *cdmDelegatedUserDialogActTier1;
@property (nonatomic, retain) NLXSchemaCDMMatchingSpanEnded *cdmMatchingSpanEnded;
@property (nonatomic, retain) NLXSchemaCDMMatchingSpanEndedTier1 *cdmMatchingSpanEndedTier1;
@property (nonatomic, retain) NLXSchemaCDMMatchingSpanTier1 *cdmMatchingSpanTier1;
@property (nonatomic, retain) NLXSchemaCDMRequestContext *cdmRequestContext;
@property (nonatomic, retain) NLXSchemaCDMServiceContext *cdmServiceContext;
@property (nonatomic, retain) NLXSchemaCDMServiceHandleMetricsReported *cdmServiceHandleMetricsReported;
@property (nonatomic, retain) NLXSchemaCDMServiceSetupMetricsReported *cdmServiceSetupMetricsReported;
@property (nonatomic, retain) NLXSchemaCDMSetupLink *cdmSetupLink;
@property (nonatomic, retain) NLXSchemaCDMSetupMissingAssetsDetected *cdmSetupMissingAssetsDetected;
@property (nonatomic, retain) NLXSchemaCDMSingleServiceSetupAttemptContext *cdmSingleServiceSetupAttemptContext;
@property (nonatomic, retain) NLXSchemaCDMSingleServiceSetupAttemptFailed *cdmSingleServiceSetupAttemptFailed;
@property (nonatomic, retain) NLXSchemaCDMSingleServiceWarmupAttemptContext *cdmSingleServiceWarmupAttemptContext;
@property (nonatomic, retain) NLXSchemaCDMSingleServiceWarmupAttemptFailed *cdmSingleServiceWarmupAttemptFailed;
@property (nonatomic, retain) NLXSchemaCDMSpanMatcherContext *cdmSpanMatcherContext;
@property (nonatomic, retain) NLXSchemaCDMSystemDialogActTier1 *cdmSystemDialogActTier1;
@property (nonatomic, retain) NLXSchemaCDMTokenizationEnded *cdmTokenizationEnded;
@property (nonatomic, retain) NLXSchemaCDMUsoGraphTier1 *cdmUsoGraphTier1;
@property (nonatomic, retain) NLXSchemaCDMXPCEventProcessingContext *cdmXpcEventProcessingContext;
@property (nonatomic, retain) NLXSchemaNLXClientEventMetadata *eventMetadata;
@property (nonatomic) bool hasCdmAllServicesSetupContext;
@property (nonatomic) bool hasCdmAllServicesWarmupContext;
@property (nonatomic) bool hasCdmAssetSetupContext;
@property (nonatomic) bool hasCdmAssetsReported;
@property (nonatomic) bool hasCdmClientSetupContext;
@property (nonatomic) bool hasCdmClientWarmupContext;
@property (nonatomic) bool hasCdmContextUpdateEnded;
@property (nonatomic) bool hasCdmDelegatedUserDialogActTier1;
@property (nonatomic) bool hasCdmMatchingSpanEnded;
@property (nonatomic) bool hasCdmMatchingSpanEndedTier1;
@property (nonatomic) bool hasCdmMatchingSpanTier1;
@property (nonatomic) bool hasCdmRequestContext;
@property (nonatomic) bool hasCdmServiceContext;
@property (nonatomic) bool hasCdmServiceHandleMetricsReported;
@property (nonatomic) bool hasCdmServiceSetupMetricsReported;
@property (nonatomic) bool hasCdmSetupLink;
@property (nonatomic) bool hasCdmSetupMissingAssetsDetected;
@property (nonatomic) bool hasCdmSingleServiceSetupAttemptContext;
@property (nonatomic) bool hasCdmSingleServiceSetupAttemptFailed;
@property (nonatomic) bool hasCdmSingleServiceWarmupAttemptContext;
@property (nonatomic) bool hasCdmSingleServiceWarmupAttemptFailed;
@property (nonatomic) bool hasCdmSpanMatcherContext;
@property (nonatomic) bool hasCdmSystemDialogActTier1;
@property (nonatomic) bool hasCdmTokenizationEnded;
@property (nonatomic) bool hasCdmUsoGraphTier1;
@property (nonatomic) bool hasCdmXpcEventProcessingContext;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasMarrsContextualSpanMatcherEnded;
@property (nonatomic) bool hasMarrsContextualSpanMatcherEndedTier1;
@property (nonatomic) bool hasMarrsMentionDetectorEnded;
@property (nonatomic) bool hasMarrsMentionDetectorEndedTier1;
@property (nonatomic) bool hasMarrsMentionResolverEnded;
@property (nonatomic) bool hasMarrsMentionResolverEndedTier1;
@property (nonatomic) bool hasMarrsQueryRewriteContext;
@property (nonatomic) bool hasMarrsQueryRewriteEvaluatedTier1;
@property (nonatomic) bool hasMarrsRepetitionDetectionContext;
@property (nonatomic) bool hasMilAssetAcquisitionContext;
@property (nonatomic) bool hasNlxCurareContext;
@property (nonatomic) bool hasNlxDeviceFixedContext;
@property (nonatomic) bool hasNlxLegacyNLContextTier1;
@property (nonatomic) bool hasSsuBackgroundRequestContext;
@property (nonatomic) bool hasSsuUserRequestContext;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) NLXSchemaMARRSContextualSpanMatcherEnded *marrsContextualSpanMatcherEnded;
@property (nonatomic, retain) NLXSchemaMARRSContextualSpanMatcherEndedTier1 *marrsContextualSpanMatcherEndedTier1;
@property (nonatomic, retain) NLXSchemaMARRSMentionDetectorEnded *marrsMentionDetectorEnded;
@property (nonatomic, retain) NLXSchemaMARRSMentionDetectorEndedTier1 *marrsMentionDetectorEndedTier1;
@property (nonatomic, retain) NLXSchemaMARRSMentionResolverEnded *marrsMentionResolverEnded;
@property (nonatomic, retain) NLXSchemaMARRSMentionResolverEndedTier1 *marrsMentionResolverEndedTier1;
@property (nonatomic, retain) NLXSchemaMARRSQueryRewriteContext *marrsQueryRewriteContext;
@property (nonatomic, retain) NLXSchemaMARRSQueryRewriteEvaluatedTier1 *marrsQueryRewriteEvaluatedTier1;
@property (nonatomic, retain) NLXSchemaMARRSRepetitionDetectionContext *marrsRepetitionDetectionContext;
@property (nonatomic, retain) NLXSchemaMILAssetAcquisitionContext *milAssetAcquisitionContext;
@property (nonatomic, retain) NLXSchemaNLXCurareContext *nlxCurareContext;
@property (nonatomic, retain) NLXSchemaNLXDeviceFixedContext *nlxDeviceFixedContext;
@property (nonatomic, retain) NLXSchemaNLXLegacyNLContextTier1 *nlxLegacyNLContextTier1;
@property (nonatomic, retain) NLXSchemaSSUBackgroundUpdateContext *ssuBackgroundRequestContext;
@property (nonatomic, retain) NLXSchemaSSUUserRequestContext *ssuUserRequestContext;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)arg1;
+ (int)joinability;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)cdmAllServicesSetupContext;
- (id)cdmAllServicesWarmupContext;
- (id)cdmAssetSetupContext;
- (id)cdmAssetsReported;
- (id)cdmClientSetupContext;
- (id)cdmClientWarmupContext;
- (id)cdmContextUpdateEnded;
- (id)cdmDelegatedUserDialogActTier1;
- (id)cdmMatchingSpanEnded;
- (id)cdmMatchingSpanEndedTier1;
- (id)cdmMatchingSpanTier1;
- (id)cdmRequestContext;
- (id)cdmServiceContext;
- (id)cdmServiceHandleMetricsReported;
- (id)cdmServiceSetupMetricsReported;
- (id)cdmSetupLink;
- (id)cdmSetupMissingAssetsDetected;
- (id)cdmSingleServiceSetupAttemptContext;
- (id)cdmSingleServiceSetupAttemptFailed;
- (id)cdmSingleServiceWarmupAttemptContext;
- (id)cdmSingleServiceWarmupAttemptFailed;
- (id)cdmSpanMatcherContext;
- (id)cdmSystemDialogActTier1;
- (id)cdmTokenizationEnded;
- (id)cdmUsoGraphTier1;
- (id)cdmXpcEventProcessingContext;
- (int)componentName;
- (void)deleteCdmAllServicesSetupContext;
- (void)deleteCdmAllServicesWarmupContext;
- (void)deleteCdmAssetSetupContext;
- (void)deleteCdmAssetsReported;
- (void)deleteCdmClientSetupContext;
- (void)deleteCdmClientWarmupContext;
- (void)deleteCdmContextUpdateEnded;
- (void)deleteCdmDelegatedUserDialogActTier1;
- (void)deleteCdmMatchingSpanEnded;
- (void)deleteCdmMatchingSpanEndedTier1;
- (void)deleteCdmMatchingSpanTier1;
- (void)deleteCdmRequestContext;
- (void)deleteCdmServiceContext;
- (void)deleteCdmServiceHandleMetricsReported;
- (void)deleteCdmServiceSetupMetricsReported;
- (void)deleteCdmSetupLink;
- (void)deleteCdmSetupMissingAssetsDetected;
- (void)deleteCdmSingleServiceSetupAttemptContext;
- (void)deleteCdmSingleServiceSetupAttemptFailed;
- (void)deleteCdmSingleServiceWarmupAttemptContext;
- (void)deleteCdmSingleServiceWarmupAttemptFailed;
- (void)deleteCdmSpanMatcherContext;
- (void)deleteCdmSystemDialogActTier1;
- (void)deleteCdmTokenizationEnded;
- (void)deleteCdmUsoGraphTier1;
- (void)deleteCdmXpcEventProcessingContext;
- (void)deleteEventMetadata;
- (void)deleteMarrsContextualSpanMatcherEnded;
- (void)deleteMarrsContextualSpanMatcherEndedTier1;
- (void)deleteMarrsMentionDetectorEnded;
- (void)deleteMarrsMentionDetectorEndedTier1;
- (void)deleteMarrsMentionResolverEnded;
- (void)deleteMarrsMentionResolverEndedTier1;
- (void)deleteMarrsQueryRewriteContext;
- (void)deleteMarrsQueryRewriteEvaluatedTier1;
- (void)deleteMarrsRepetitionDetectionContext;
- (void)deleteMilAssetAcquisitionContext;
- (void)deleteNlxCurareContext;
- (void)deleteNlxDeviceFixedContext;
- (void)deleteNlxLegacyNLContextTier1;
- (void)deleteSsuBackgroundRequestContext;
- (void)deleteSsuUserRequestContext;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (int)getAnyEventType;
- (id)getComponentId;
- (bool)hasCdmAllServicesSetupContext;
- (bool)hasCdmAllServicesWarmupContext;
- (bool)hasCdmAssetSetupContext;
- (bool)hasCdmAssetsReported;
- (bool)hasCdmClientSetupContext;
- (bool)hasCdmClientWarmupContext;
- (bool)hasCdmContextUpdateEnded;
- (bool)hasCdmDelegatedUserDialogActTier1;
- (bool)hasCdmMatchingSpanEnded;
- (bool)hasCdmMatchingSpanEndedTier1;
- (bool)hasCdmMatchingSpanTier1;
- (bool)hasCdmRequestContext;
- (bool)hasCdmServiceContext;
- (bool)hasCdmServiceHandleMetricsReported;
- (bool)hasCdmServiceSetupMetricsReported;
- (bool)hasCdmSetupLink;
- (bool)hasCdmSetupMissingAssetsDetected;
- (bool)hasCdmSingleServiceSetupAttemptContext;
- (bool)hasCdmSingleServiceSetupAttemptFailed;
- (bool)hasCdmSingleServiceWarmupAttemptContext;
- (bool)hasCdmSingleServiceWarmupAttemptFailed;
- (bool)hasCdmSpanMatcherContext;
- (bool)hasCdmSystemDialogActTier1;
- (bool)hasCdmTokenizationEnded;
- (bool)hasCdmUsoGraphTier1;
- (bool)hasCdmXpcEventProcessingContext;
- (bool)hasEventMetadata;
- (bool)hasMarrsContextualSpanMatcherEnded;
- (bool)hasMarrsContextualSpanMatcherEndedTier1;
- (bool)hasMarrsMentionDetectorEnded;
- (bool)hasMarrsMentionDetectorEndedTier1;
- (bool)hasMarrsMentionResolverEnded;
- (bool)hasMarrsMentionResolverEndedTier1;
- (bool)hasMarrsQueryRewriteContext;
- (bool)hasMarrsQueryRewriteEvaluatedTier1;
- (bool)hasMarrsRepetitionDetectionContext;
- (bool)hasMilAssetAcquisitionContext;
- (bool)hasNlxCurareContext;
- (bool)hasNlxDeviceFixedContext;
- (bool)hasNlxLegacyNLContextTier1;
- (bool)hasSsuBackgroundRequestContext;
- (bool)hasSsuUserRequestContext;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)marrsContextualSpanMatcherEnded;
- (id)marrsContextualSpanMatcherEndedTier1;
- (id)marrsMentionDetectorEnded;
- (id)marrsMentionDetectorEndedTier1;
- (id)marrsMentionResolverEnded;
- (id)marrsMentionResolverEndedTier1;
- (id)marrsQueryRewriteContext;
- (id)marrsQueryRewriteEvaluatedTier1;
- (id)marrsRepetitionDetectionContext;
- (id)milAssetAcquisitionContext;
- (id)nlxCurareContext;
- (id)nlxDeviceFixedContext;
- (id)nlxLegacyNLContextTier1;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setCdmAllServicesSetupContext:(id)arg1;
- (void)setCdmAllServicesWarmupContext:(id)arg1;
- (void)setCdmAssetSetupContext:(id)arg1;
- (void)setCdmAssetsReported:(id)arg1;
- (void)setCdmClientSetupContext:(id)arg1;
- (void)setCdmClientWarmupContext:(id)arg1;
- (void)setCdmContextUpdateEnded:(id)arg1;
- (void)setCdmDelegatedUserDialogActTier1:(id)arg1;
- (void)setCdmMatchingSpanEnded:(id)arg1;
- (void)setCdmMatchingSpanEndedTier1:(id)arg1;
- (void)setCdmMatchingSpanTier1:(id)arg1;
- (void)setCdmRequestContext:(id)arg1;
- (void)setCdmServiceContext:(id)arg1;
- (void)setCdmServiceHandleMetricsReported:(id)arg1;
- (void)setCdmServiceSetupMetricsReported:(id)arg1;
- (void)setCdmSetupLink:(id)arg1;
- (void)setCdmSetupMissingAssetsDetected:(id)arg1;
- (void)setCdmSingleServiceSetupAttemptContext:(id)arg1;
- (void)setCdmSingleServiceSetupAttemptFailed:(id)arg1;
- (void)setCdmSingleServiceWarmupAttemptContext:(id)arg1;
- (void)setCdmSingleServiceWarmupAttemptFailed:(id)arg1;
- (void)setCdmSpanMatcherContext:(id)arg1;
- (void)setCdmSystemDialogActTier1:(id)arg1;
- (void)setCdmTokenizationEnded:(id)arg1;
- (void)setCdmUsoGraphTier1:(id)arg1;
- (void)setCdmXpcEventProcessingContext:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setHasCdmAllServicesSetupContext:(bool)arg1;
- (void)setHasCdmAllServicesWarmupContext:(bool)arg1;
- (void)setHasCdmAssetSetupContext:(bool)arg1;
- (void)setHasCdmAssetsReported:(bool)arg1;
- (void)setHasCdmClientSetupContext:(bool)arg1;
- (void)setHasCdmClientWarmupContext:(bool)arg1;
- (void)setHasCdmContextUpdateEnded:(bool)arg1;
- (void)setHasCdmDelegatedUserDialogActTier1:(bool)arg1;
- (void)setHasCdmMatchingSpanEnded:(bool)arg1;
- (void)setHasCdmMatchingSpanEndedTier1:(bool)arg1;
- (void)setHasCdmMatchingSpanTier1:(bool)arg1;
- (void)setHasCdmRequestContext:(bool)arg1;
- (void)setHasCdmServiceContext:(bool)arg1;
- (void)setHasCdmServiceHandleMetricsReported:(bool)arg1;
- (void)setHasCdmServiceSetupMetricsReported:(bool)arg1;
- (void)setHasCdmSetupLink:(bool)arg1;
- (void)setHasCdmSetupMissingAssetsDetected:(bool)arg1;
- (void)setHasCdmSingleServiceSetupAttemptContext:(bool)arg1;
- (void)setHasCdmSingleServiceSetupAttemptFailed:(bool)arg1;
- (void)setHasCdmSingleServiceWarmupAttemptContext:(bool)arg1;
- (void)setHasCdmSingleServiceWarmupAttemptFailed:(bool)arg1;
- (void)setHasCdmSpanMatcherContext:(bool)arg1;
- (void)setHasCdmSystemDialogActTier1:(bool)arg1;
- (void)setHasCdmTokenizationEnded:(bool)arg1;
- (void)setHasCdmUsoGraphTier1:(bool)arg1;
- (void)setHasCdmXpcEventProcessingContext:(bool)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasMarrsContextualSpanMatcherEnded:(bool)arg1;
- (void)setHasMarrsContextualSpanMatcherEndedTier1:(bool)arg1;
- (void)setHasMarrsMentionDetectorEnded:(bool)arg1;
- (void)setHasMarrsMentionDetectorEndedTier1:(bool)arg1;
- (void)setHasMarrsMentionResolverEnded:(bool)arg1;
- (void)setHasMarrsMentionResolverEndedTier1:(bool)arg1;
- (void)setHasMarrsQueryRewriteContext:(bool)arg1;
- (void)setHasMarrsQueryRewriteEvaluatedTier1:(bool)arg1;
- (void)setHasMarrsRepetitionDetectionContext:(bool)arg1;
- (void)setHasMilAssetAcquisitionContext:(bool)arg1;
- (void)setHasNlxCurareContext:(bool)arg1;
- (void)setHasNlxDeviceFixedContext:(bool)arg1;
- (void)setHasNlxLegacyNLContextTier1:(bool)arg1;
- (void)setHasSsuBackgroundRequestContext:(bool)arg1;
- (void)setHasSsuUserRequestContext:(bool)arg1;
- (void)setMarrsContextualSpanMatcherEnded:(id)arg1;
- (void)setMarrsContextualSpanMatcherEndedTier1:(id)arg1;
- (void)setMarrsMentionDetectorEnded:(id)arg1;
- (void)setMarrsMentionDetectorEndedTier1:(id)arg1;
- (void)setMarrsMentionResolverEnded:(id)arg1;
- (void)setMarrsMentionResolverEndedTier1:(id)arg1;
- (void)setMarrsQueryRewriteContext:(id)arg1;
- (void)setMarrsQueryRewriteEvaluatedTier1:(id)arg1;
- (void)setMarrsRepetitionDetectionContext:(id)arg1;
- (void)setMilAssetAcquisitionContext:(id)arg1;
- (void)setNlxCurareContext:(id)arg1;
- (void)setNlxDeviceFixedContext:(id)arg1;
- (void)setNlxLegacyNLContextTier1:(id)arg1;
- (void)setSsuBackgroundRequestContext:(id)arg1;
- (void)setSsuUserRequestContext:(id)arg1;
- (id)ssuBackgroundRequestContext;
- (id)ssuUserRequestContext;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichEvent_Type;
- (unsigned long long)whichInnerEventType;
- (void)writeTo:(id)arg1;

@end
