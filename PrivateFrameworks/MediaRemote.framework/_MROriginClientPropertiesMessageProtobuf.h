/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MROriginClientPropertiesMessageProtobuf : PBCodable <NSCopying> {
    NSString * _devicePlaybackSessionID;
    struct { 
        unsigned int lastPlayingTimestamp : 1; 
    }  _has;
    double  _lastPlayingTimestamp;
}

@property (nonatomic, retain) NSString *devicePlaybackSessionID;
@property (nonatomic, readonly) bool hasDevicePlaybackSessionID;
@property (nonatomic) bool hasLastPlayingTimestamp;
@property (nonatomic) double lastPlayingTimestamp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)devicePlaybackSessionID;
- (id)dictionaryRepresentation;
- (bool)hasDevicePlaybackSessionID;
- (bool)hasLastPlayingTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)lastPlayingTimestamp;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDevicePlaybackSessionID:(id)arg1;
- (void)setHasLastPlayingTimestamp:(bool)arg1;
- (void)setLastPlayingTimestamp:(double)arg1;
- (void)writeTo:(id)arg1;

@end
