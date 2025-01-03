/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI
 */

@interface MUStyleAttribute : PBCodable <NSCopying> {
    struct { 
        unsigned int key : 1; 
        unsigned int value : 1; 
    }  _has;
    unsigned int  _key;
    unsigned int  _value;
}

@property (nonatomic) bool hasKey;
@property (nonatomic) bool hasValue;
@property (nonatomic) unsigned int key;
@property (nonatomic) unsigned int value;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasKey;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasKey:(bool)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setKey:(unsigned int)arg1;
- (void)setValue:(unsigned int)arg1;
- (unsigned int)value;
- (void)writeTo:(id)arg1;

@end
