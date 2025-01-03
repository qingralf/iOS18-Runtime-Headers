/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFileNameUniquifier : NSObject {
    NSArray * _existingFileSources;
}

@property (nonatomic, readonly, copy) NSArray *existingFileSources;

- (void).cxx_destruct;
- (bool)_fileExistsAtPath:(id)arg1;
- (void)_rememberUniquifiedPath:(id)arg1;
- (id)_uniqueFileSystemName:(id)arg1 inDirectory:(id)arg2 rememberResult:(bool)arg3;
- (id)ensureUniqueFileURL:(id)arg1;
- (id)ensureUniquePath:(id)arg1;
- (id)ensureUniquePath:(id)arg1 alternateExtensions:(id)arg2;
- (id)ensureUniquePath:(id)arg1 andAlternateExtension:(id)arg2;
- (id)existingFileSources;
- (id)initWithExistingFileSources:(id)arg1;
- (id)uniqueFileSystemName:(id)arg1 inDirectory:(id)arg2;
- (id)uniqueFileSystemNameForPath:(id)arg1 withAlternateExtension:(id)arg2;
- (id)uniqueFileSystemNameForPath:(id)arg1 withAlternateExtensions:(id)arg2;

@end
