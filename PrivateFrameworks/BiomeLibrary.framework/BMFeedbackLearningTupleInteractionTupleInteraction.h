/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMFeedbackLearningTupleInteractionTupleInteraction : BMEventBase <BMStoreData> {
    NSArray * _candidates;
    unsigned int  _dataVersion;
    BMIntelligenceFlowUserAlignment * _userAlignment;
}

@property (nonatomic, readonly) NSArray *candidates;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BMIntelligenceFlowUserAlignment *userAlignment;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_candidatesJSONArray;
- (id)candidates;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithCandidates:(id)arg1 userAlignment:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (id)userAlignment;
- (void)writeTo:(id)arg1;

@end
