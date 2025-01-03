/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICSystemPaperThumbnailServiceInternal : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_accessibilityAppearanceDidChange;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_cacheDidInvalidateObject;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_contextDidDeleteObject;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_contextDidUpdateObject;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_didDeleteSystemPaperNotes;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_didUpdateSystemPaperNotes;
    void fileManager;
    void observations;
    void thumbnailService;
    void traitCollection;
}

@property (nonatomic, readonly) ICThumbnailService *thumbnailService;
@property (nonatomic, retain) UITraitCollection *traitCollection;

+ (id)sharedService;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)invalidateForNote:(id)arg1;
- (void)invalidateForNoteIDs:(id)arg1;
- (void)invalidateForNotes:(id)arg1;
- (void)observe;
- (void)setTraitCollection:(id)arg1;
- (id)thumbnailService;
- (id)traitCollection;
- (void)updateIfNeededForNote:(id)arg1 completion:(id /* block */)arg2;
- (void)updateIfNeededForNoteIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)updateIfNeededForNotes:(id)arg1 completion:(id /* block */)arg2;
- (void)updateIfNeededWithCompletion:(id /* block */)arg1;
- (void)updateRecentSystemPaperNote;

@end
