/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Security.framework/Security
 */

@interface SECSFAMatchProperty : PBCodable <NSCopying> {
    NSString * _propertyName;
    SECSFAPropertyValue * _value;
}

@property (nonatomic, readonly) bool hasPropertyName;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic, retain) NSString *propertyName;
@property (nonatomic, retain) SECSFAPropertyValue *value;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPropertyName;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)propertyName;
- (bool)readFrom:(id)arg1;
- (void)setPropertyName:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

@end
