/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVLyricsAudioAttributes : NSObject {
    double  _lyricsOffset;
    NSString * _role;
    bool  _spatialRole;
}

@property (nonatomic) double lyricsOffset;
@property (nonatomic, copy) NSString *role;
@property (getter=isSpatialRole, nonatomic) bool spatialRole;

- (void).cxx_destruct;
- (bool)isSpatialRole;
- (double)lyricsOffset;
- (id)role;
- (void)setLyricsOffset:(double)arg1;
- (void)setRole:(id)arg1;
- (void)setSpatialRole:(bool)arg1;

@end