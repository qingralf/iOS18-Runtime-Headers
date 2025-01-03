/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMMonotonicTimestampValue : BMEventBase <BMStoreData> {
    unsigned long long  _continuousNanosecondsSinceBoot;
    unsigned int  _dataVersion;
    bool  _hasContinuousNanosecondsSinceBoot;
    bool  _hasSuspendingNanosecondsSinceBoot;
    unsigned long long  _suspendingNanosecondsSinceBoot;
}

@property (nonatomic, readonly) unsigned long long continuousNanosecondsSinceBoot;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasContinuousNanosecondsSinceBoot;
@property (nonatomic) bool hasSuspendingNanosecondsSinceBoot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long suspendingNanosecondsSinceBoot;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (unsigned long long)continuousNanosecondsSinceBoot;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasContinuousNanosecondsSinceBoot;
- (bool)hasSuspendingNanosecondsSinceBoot;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithSuspendingNanosecondsSinceBoot:(id)arg1 continuousNanosecondsSinceBoot:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasContinuousNanosecondsSinceBoot:(bool)arg1;
- (void)setHasSuspendingNanosecondsSinceBoot:(bool)arg1;
- (unsigned long long)suspendingNanosecondsSinceBoot;
- (void)writeTo:(id)arg1;

@end
