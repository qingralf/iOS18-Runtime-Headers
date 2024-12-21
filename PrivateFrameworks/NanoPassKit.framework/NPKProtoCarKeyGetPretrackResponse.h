/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoCarKeyGetPretrackResponse : PBCodable <NSCopying> {
    NSData * _errorData;
    NSData * _preTrackRequestData;
}

@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, readonly) bool hasErrorData;
@property (nonatomic, readonly) bool hasPreTrackRequestData;
@property (nonatomic, retain) NSData *preTrackRequestData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (bool)hasErrorData;
- (bool)hasPreTrackRequestData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)preTrackRequestData;
- (bool)readFrom:(id)arg1;
- (void)setErrorData:(id)arg1;
- (void)setPreTrackRequestData:(id)arg1;
- (void)writeTo:(id)arg1;

@end