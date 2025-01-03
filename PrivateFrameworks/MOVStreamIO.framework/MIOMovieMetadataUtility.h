/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
 */

@interface MIOMovieMetadataUtility : NSObject {
    AVMutableMovie * _movie;
}

@property (retain) AVMutableMovie *movie;

+ (id)attachmentsTrackInAsset:(id)arg1 forTrack:(id)arg2;
+ (id)findAllAssociatedMetadataTracksInAsset:(id)arg1 forTrack:(id)arg2;
+ (id)findStreamIdFromQTTagsOfTrack:(id)arg1;
+ (bool)isTrack:(id)arg1 forStreamId:(id)arg2 mediaType:(id)arg3;

- (void).cxx_destruct;
- (bool)addMovieMetadataItem:(id)arg1;
- (bool)applyChangesError:(id*)arg1;
- (id)customTrackMetadataForStream:(id)arg1 mediaType:(long long)arg2 error:(id*)arg3;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (id)metadataForMovie;
- (id)movie;
- (bool)setCustomTrackMetadataForStream:(id)arg1 mediaType:(long long)arg2 metadata:(id)arg3 error:(id*)arg4;
- (void)setMovie:(id)arg1;
- (bool)setMovieMetadata:(id)arg1;
- (id)trackForStreamId:(id)arg1 mediaType:(long long)arg2 error:(id*)arg3;

@end
