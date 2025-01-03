/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
 */

@interface VUIRestrictions : NSObject <VUIRestrictions>

@property (nonatomic, readonly) bool allowsExplicitContent;
@property (nonatomic, readonly) bool allowsShowingUndownloadedMovies;
@property (nonatomic, readonly) bool allowsShowingUndownloadedTVShows;

+ (id)sharedInstance;

- (bool)allowsExplicitContent;
- (bool)allowsShowingUndownloadedMovies;
- (bool)allowsShowingUndownloadedTVShows;

@end
