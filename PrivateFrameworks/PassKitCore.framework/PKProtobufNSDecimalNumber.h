/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKProtobufNSDecimalNumber : PBCodable <NSCopying> {
    int  _exponent;
    int  _isCompact;
    int  _isNegative;
    int  _length;
    NSData * _mantissa;
    int  _reserved;
    unsigned int  _version;
}

@property (nonatomic) int exponent;
@property (nonatomic) int isCompact;
@property (nonatomic) int isNegative;
@property (nonatomic) int length;
@property (nonatomic, retain) NSData *mantissa;
@property (nonatomic) int reserved;
@property (nonatomic) unsigned int version;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)exponent;
- (unsigned long long)hash;
- (int)isCompact;
- (bool)isEqual:(id)arg1;
- (int)isNegative;
- (int)length;
- (id)mantissa;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)reserved;
- (void)setExponent:(int)arg1;
- (void)setIsCompact:(int)arg1;
- (void)setIsNegative:(int)arg1;
- (void)setLength:(int)arg1;
- (void)setMantissa:(id)arg1;
- (void)setReserved:(int)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end