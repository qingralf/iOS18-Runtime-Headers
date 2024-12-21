/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

@interface AeroMLTracerSubEvent : PBCodable <NSCopying> {
    NSMutableArray * _attributes;
    NSString * _details;
    struct { 
        unsigned int privatizedTimeStamp : 1; 
    }  _has;
    NSString * _name;
    unsigned int  _privatizedTimeStamp;
}

@property (nonatomic, retain) NSMutableArray *attributes;
@property (nonatomic, retain) NSString *details;
@property (nonatomic, readonly) bool hasDetails;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasPrivatizedTimeStamp;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned int privatizedTimeStamp;

+ (Class)attributesType;

- (void).cxx_destruct;
- (void)addAttributes:(id)arg1;
- (id)attributes;
- (id)attributesAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributesCount;
- (void)clearAttributes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)details;
- (id)dictionaryRepresentation;
- (bool)hasDetails;
- (bool)hasName;
- (bool)hasPrivatizedTimeStamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (unsigned int)privatizedTimeStamp;
- (bool)readFrom:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setDetails:(id)arg1;
- (void)setHasPrivatizedTimeStamp:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPrivatizedTimeStamp:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end