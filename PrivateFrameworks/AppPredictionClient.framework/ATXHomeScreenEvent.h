/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

@interface ATXHomeScreenEvent : NSObject <ATXProactiveSuggestionUIInteractionProtocol> {
    double  _absoluteDate;
    NSString * _appBundleId;
    NSString * _blendingCacheId;
    unsigned char  _consumerSubType;
    NSString * _eventTypeString;
    NSString * _intentDescription;
    bool  _isSuggestedWidget;
    ATXHomeScreenEventMetadata * _metadata;
    NSString * _reason;
    NSString * _stackId;
    unsigned long long  _stackKind;
    unsigned long long  _stackLocation;
    NSArray * _suggestionIds;
    NSString * _widgetBundleId;
    NSString * _widgetKind;
    unsigned long long  _widgetSize;
    NSString * _widgetUniqueId;
}

@property (nonatomic, retain) NSString *appBundleId;
@property (nonatomic, retain) NSString *blendingCacheId;
@property (nonatomic, readonly) unsigned char consumerSubType;
@property (nonatomic, readonly) unsigned char consumerSubTypeForUIStream;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *eventTypeString;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *intentDescription;
@property (nonatomic) bool isSuggestedWidget;
@property (nonatomic, retain) ATXHomeScreenEventMetadata *metadata;
@property (nonatomic, retain) NSString *reason;
@property (nonatomic, retain) NSString *stackId;
@property (nonatomic) unsigned long long stackKind;
@property (nonatomic) unsigned long long stackLocation;
@property (nonatomic, retain) NSArray *suggestionIds;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *widgetBundleId;
@property (nonatomic, retain) NSString *widgetKind;
@property (nonatomic) unsigned long long widgetSize;
@property (nonatomic, retain) NSString *widgetUniqueId;

+ (id)eventForPageShownWithIndex:(unsigned long long)arg1 widgetsByStack:(id)arg2 blendingCacheIdentifier:(id)arg3;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_uuidArrayFromStringArray:(id)arg1;
- (id)appBundleId;
- (id)blendingCacheId;
- (id)blendingUICacheUpdateUUIDForUICacheConsumerSubType:(unsigned char)arg1;
- (bool)checkAndReportDecodingFailureIfNeededFordouble:(double)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (unsigned char)consumerSubType;
- (unsigned char)consumerSubTypeForUIStream;
- (unsigned int)dataVersion;
- (id)date;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)eventTypeString;
- (unsigned char)feedbackConsumerSubType;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)intentDescription;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXHomeScreenEvent:(id)arg1;
- (bool)isSuggestedWidget;
- (id)json;
- (id)jsonDict;
- (id)metadata;
- (id)proto;
- (id)reason;
- (id)serialize;
- (id)sessionIdentifierForSessionType:(long long)arg1 uiCacheConsumerSubType:(unsigned char)arg2;
- (id)sessionProcessingOptionsForSessionType:(long long)arg1;
- (void)setAppBundleId:(id)arg1;
- (void)setBlendingCacheId:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setEventTypeString:(id)arg1;
- (void)setIntentDescription:(id)arg1;
- (void)setIsSuggestedWidget:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setStackId:(id)arg1;
- (void)setStackKind:(unsigned long long)arg1;
- (void)setStackLocation:(unsigned long long)arg1;
- (void)setSuggestionIds:(id)arg1;
- (void)setWidgetBundleId:(id)arg1;
- (void)setWidgetKind:(id)arg1;
- (void)setWidgetSize:(unsigned long long)arg1;
- (void)setWidgetUniqueId:(id)arg1;
- (id)stackId;
- (unsigned long long)stackKind;
- (unsigned long long)stackLocation;
- (id)suggestionIds;
- (void)updateUIFeedbackSession:(id)arg1 uiCacheConsumerSubType:(unsigned char)arg2;
- (id)widgetBundleId;
- (id)widgetKind;
- (unsigned long long)widgetSize;
- (id)widgetUniqueId;

@end
