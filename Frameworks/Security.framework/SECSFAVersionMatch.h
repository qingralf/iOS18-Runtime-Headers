/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Security.framework/Security
 */

@interface SECSFAVersionMatch : PBCodable <NSCopying> {
    NSMutableArray * _versions;
}

@property (nonatomic, retain) NSMutableArray *versions;

+ (Class)versionsType;

- (void).cxx_destruct;
- (void)addVersions:(id)arg1;
- (void)clearVersions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setVersions:(id)arg1;
- (id)versions;
- (id)versionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)versionsCount;
- (void)writeTo:(id)arg1;

@end
