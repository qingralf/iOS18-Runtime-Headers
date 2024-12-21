/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMetalLibraryProvider : NSObject <SCNMetalLibraryProvider> {
    id /* block */  _block;
    <MTLLibrary> * _library;
    NSURL * _libraryURL;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned long long)_libraryHash;
- (void)dealloc;
- (id)iniWithBlock:(id /* block */)arg1;
- (id)iniWithLibrary:(id)arg1;
- (id)iniWithLibraryURL:(id)arg1;
- (id)libraryForDevice:(id)arg1;

@end