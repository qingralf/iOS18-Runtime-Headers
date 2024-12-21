/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMAppIntentInvocationActionOutputConfirmationActionName : BMEventBase <BMStoreData> {
    NSArray * _acceptAlternatives;
    BMAppIntentInvocationStaticDeferredLocalizedString * _acceptLabel;
    unsigned int  _dataVersion;
    NSArray * _denyAlternatives;
    BMAppIntentInvocationStaticDeferredLocalizedString * _denyLabel;
    bool  _destructive;
    bool  _hasDestructive;
    int  _type;
}

@property (nonatomic, readonly) NSArray *acceptAlternatives;
@property (nonatomic, readonly) BMAppIntentInvocationStaticDeferredLocalizedString *acceptLabel;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSArray *denyAlternatives;
@property (nonatomic, readonly) BMAppIntentInvocationStaticDeferredLocalizedString *denyLabel;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool destructive;
@property (nonatomic) bool hasDestructive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int type;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_acceptAlternativesJSONArray;
- (id)_denyAlternativesJSONArray;
- (id)acceptAlternatives;
- (id)acceptLabel;
- (unsigned int)dataVersion;
- (id)denyAlternatives;
- (id)denyLabel;
- (id)description;
- (bool)destructive;
- (bool)hasDestructive;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithType:(int)arg1 destructive:(id)arg2 acceptLabel:(id)arg3 acceptAlternatives:(id)arg4 denyLabel:(id)arg5 denyAlternatives:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasDestructive:(bool)arg1;
- (int)type;
- (void)writeTo:(id)arg1;

@end