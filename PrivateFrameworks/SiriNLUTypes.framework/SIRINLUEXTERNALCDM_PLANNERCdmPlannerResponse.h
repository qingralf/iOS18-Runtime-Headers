/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriNLUTypes.framework/SiriNLUTypes
 */

@interface SIRINLUEXTERNALCDM_PLANNERCdmPlannerResponse : PBCodable <NSCopying> {
    NSData * _generatedTranscriptEventsJson;
    NSString * _planText;
    NSMutableArray * _transcriptEvents;
}

@property (nonatomic, retain) NSData *generatedTranscriptEventsJson;
@property (nonatomic, readonly) bool hasGeneratedTranscriptEventsJson;
@property (nonatomic, readonly) bool hasPlanText;
@property (nonatomic, retain) NSString *planText;
@property (nonatomic, retain) NSMutableArray *transcriptEvents;

+ (Class)transcriptEventsType;

- (void).cxx_destruct;
- (void)addTranscriptEvents:(id)arg1;
- (void)clearTranscriptEvents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)generatedTranscriptEventsJson;
- (bool)hasGeneratedTranscriptEventsJson;
- (bool)hasPlanText;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)planText;
- (bool)readFrom:(id)arg1;
- (void)setGeneratedTranscriptEventsJson:(id)arg1;
- (void)setPlanText:(id)arg1;
- (void)setTranscriptEvents:(id)arg1;
- (id)transcriptEvents;
- (id)transcriptEventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)transcriptEventsCount;
- (void)writeTo:(id)arg1;

@end