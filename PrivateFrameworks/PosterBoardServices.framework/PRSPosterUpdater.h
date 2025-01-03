/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterBoardServices.framework/PosterBoardServices
 */

@interface PRSPosterUpdater : NSObject {
    PFServerPosterPath * _weakPath;
}

+ (bool)canUpdatesBeAppliedLocally:(id)arg1;
+ (id)updaterForPath:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithWeakPath:(id)arg1;
- (bool)applyUpdateLocally:(id)arg1 error:(out id*)arg2;
- (bool)applyUpdatesLocally:(id)arg1 error:(out id*)arg2;
- (id)init;

@end
