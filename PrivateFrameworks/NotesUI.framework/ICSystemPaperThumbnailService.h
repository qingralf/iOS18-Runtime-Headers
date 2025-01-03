/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICSystemPaperThumbnailService : NSObject {
    ICSystemPaperThumbnailServiceInternal * _systemPaperThumbnailService;
}

@property (nonatomic, retain) ICSystemPaperThumbnailServiceInternal *systemPaperThumbnailService;
@property (nonatomic, retain) UITraitCollection *traitCollection;

+ (id)sharedService;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithSystemPaperThumbnailService:(id)arg1;
- (void)invalidate;
- (void)invalidateForNote:(id)arg1;
- (void)observe;
- (void)setSystemPaperThumbnailService:(id)arg1;
- (void)setTraitCollection:(id)arg1;
- (id)systemPaperThumbnailService;
- (id)traitCollection;
- (void)updateIfNeededForNote:(id)arg1 completion:(id /* block */)arg2;
- (void)updateIfNeededWithCompletion:(id /* block */)arg1;

@end
