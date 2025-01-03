/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAPackage : NSObject {
    struct _CAPackageData { id x1; id x2; id x3; bool x4; bool x5; id x6; id x7; } * _data;
}

@property (getter=isGeometryFlipped, readonly) bool geometryFlipped;
@property (readonly) CALayer *rootLayer;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

+ (id)packageWithContentsOfURL:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id*)arg4;
+ (id)packageWithData:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id*)arg4;

- (Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2;
- (void)CAMLParser:(id)arg1 didLoadResource:(id)arg2 fromURL:(id)arg3;
- (id)CAMLParser:(id)arg1 resourceForURL:(id)arg2;
- (void)_addClassSubstitutions:(id)arg1;
- (id)_initWithContentsOfURL:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)_initWithData:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (void)_readFromArchiveData:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)_readFromCAMLData:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (void)_readFromCAMLURL:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (void)dealloc;
- (void)foreachLayer:(id /* block */)arg1;
- (bool)isGeometryFlipped;
- (id)publishedObjectNames;
- (id)publishedObjectWithName:(id)arg1;
- (id)rootLayer;
- (id)substitutedClasses;
- (Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;
- (id)unarchiver:(id)arg1 didDecodeObject:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ContactlessReaderUI.framework/ContactlessReaderUI

- (id)_stateController;
- (id)availableStates;
- (id)availableStatesOnLayer:(id)arg1;
- (void)transitionToStateWithName:(id)arg1;
- (void)transitionToStateWithName:(id)arg1 onLayer:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit

+ (id)ccuiPackageFromDescription:(id)arg1;

@end
