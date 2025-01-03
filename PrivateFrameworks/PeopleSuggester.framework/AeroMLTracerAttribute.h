/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

@interface AeroMLTracerAttribute : PBCodable <NSCopying> {
    NSString * _name;
    NSString * _stringValue;
}

@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasStringValue;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *stringValue;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasName;
- (bool)hasStringValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setName:(id)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (void)writeTo:(id)arg1;

@end
