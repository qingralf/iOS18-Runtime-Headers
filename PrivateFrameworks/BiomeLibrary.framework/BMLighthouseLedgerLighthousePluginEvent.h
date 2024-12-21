/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMLighthouseLedgerLighthousePluginEvent : BMEventBase <BMStoreData> {
    NSString * _contextID;
    unsigned int  _dataVersion;
    bool  _hasRaw_timestamp;
    bool  _hasUsePrivateUpload;
    BMLighthouseLedgerLighthousePluginEventEventStatus * _performTaskStatus;
    BMLighthouseLedgerLighthousePluginEventEventStatus * _performTrialTaskStatus;
    double  _raw_timestamp;
    BMLighthouseLedgerLighthousePluginEventEventStatus * _stop;
    BMLighthouseLedgerTrialIdentifiers * _trialIdentifiers;
    bool  _usePrivateUpload;
}

@property (nonatomic, readonly) NSString *contextID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasUsePrivateUpload;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BMLighthouseLedgerLighthousePluginEventEventStatus *performTaskStatus;
@property (nonatomic, readonly) BMLighthouseLedgerLighthousePluginEventEventStatus *performTrialTaskStatus;
@property (nonatomic, readonly) BMLighthouseLedgerLighthousePluginEventEventStatus *stop;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) BMLighthouseLedgerTrialIdentifiers *trialIdentifiers;
@property (nonatomic, readonly) bool usePrivateUpload;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)contextID;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasUsePrivateUpload;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithTrialIdentifiers:(id)arg1 contextID:(id)arg2 timestamp:(id)arg3 performTaskStatus:(id)arg4 performTrialTaskStatus:(id)arg5 stop:(id)arg6;
- (id)initWithTrialIdentifiers:(id)arg1 contextID:(id)arg2 timestamp:(id)arg3 usePrivateUpload:(id)arg4 performTaskStatus:(id)arg5 performTrialTaskStatus:(id)arg6 stop:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)performTaskStatus;
- (id)performTrialTaskStatus;
- (id)serialize;
- (void)setHasUsePrivateUpload:(bool)arg1;
- (id)stop;
- (id)timestamp;
- (id)trialIdentifiers;
- (bool)usePrivateUpload;
- (void)writeTo:(id)arg1;

@end