/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMIntelligenceEngineInteractionCandidateInteraction : BMEventBase <BMStoreData> {
    BMIntelligenceEngineInteractionCandidateID * _candidateId;
    unsigned int  _dataVersion;
    int  _userAlignment;
}

@property (nonatomic, readonly) BMIntelligenceEngineInteractionCandidateID *candidateId;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int userAlignment;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)candidateId;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithCandidateId:(id)arg1 userAlignment:(int)arg2;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (int)userAlignment;
- (void)writeTo:(id)arg1;

@end
