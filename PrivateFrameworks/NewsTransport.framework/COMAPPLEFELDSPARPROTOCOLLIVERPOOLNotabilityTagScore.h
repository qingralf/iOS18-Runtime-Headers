/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLNotabilityTagScore : PBCodable <NSCopying> {
    NSMutableArray * _scores;
    NSString * _tagId;
}

@property (nonatomic, readonly) bool hasTagId;
@property (nonatomic, retain) NSMutableArray *scores;
@property (nonatomic, retain) NSString *tagId;

+ (Class)scoresType;

- (void).cxx_destruct;
- (void)addScores:(id)arg1;
- (void)clearScores;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTagId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)scores;
- (id)scoresAtIndex:(unsigned long long)arg1;
- (unsigned long long)scoresCount;
- (void)setScores:(id)arg1;
- (void)setTagId:(id)arg1;
- (id)tagId;
- (void)writeTo:(id)arg1;

@end
