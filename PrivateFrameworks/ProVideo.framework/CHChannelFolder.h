/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface CHChannelFolder : CHChannelBase

+ (unsigned int)_defaultChannelFlags;
+ (bool)_isOZChannelClassOK:(struct OZChannelBase { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; }*)arg1;
+ (struct OZChannelBase { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; }*)_newOZChannelWithName:(id)arg1 channelID:(unsigned int)arg2 flags:(unsigned int)arg3;

- (unsigned int)_newChannelIdForChild;
- (bool)_shouldDeleteDescendantsOnRemoval;
- (void)addChild:(id)arg1;
- (id)addNewChannelWithXMLTypeInfo:(id)arg1;
- (id)channelStateForDescendants:(bool)arg1;
- (id)childAtIndex:(unsigned long long)arg1;
- (id)childWithChannelID:(unsigned int)arg1;
- (id)children;
- (bool)configureDescendantsWithChannelState:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)debugDescrptionWithIndentLevel:(unsigned int)arg1;
- (id)descendantAtPath:(id)arg1;
- (id)description;
- (unsigned int)folderFlags;
- (bool)hasDescendant:(id)arg1;
- (bool)hasDescendantWithFadeHandle;
- (bool)hasModifiedDescendant;
- (bool)hasTimeVaryingDescendant;
- (unsigned long long)indexOfChild:(id)arg1;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)iterateDescendantsWithOptions:(unsigned int)arg1 usingBlock:(id /* block */)arg2;
- (void)iterateDescendantsWithOptions:(unsigned int)arg1 usingFunction:(int (*)arg2 contextInfo:(void*)arg3;
- (void)iterateDescendantsWithOptions:(unsigned int)arg1 usingSelector:(SEL)arg2 delegate:(id)arg3 contextInfo:(void*)arg4;
- (unsigned int)numberOfChildren;
- (void*)ozChannel;
- (id)pathToDescendant:(id)arg1;
- (void)removeAllChildren;
- (void)removeChild:(id)arg1;
- (void)resetFolderFlag:(unsigned int)arg1;
- (void)setFolderFlag:(unsigned int)arg1;
- (void)setFolderFlags:(unsigned int)arg1;
- (bool)testFolderFlag:(unsigned int)arg1;

@end