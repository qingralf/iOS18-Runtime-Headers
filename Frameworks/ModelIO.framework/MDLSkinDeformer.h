/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLSkinDeformer : NSObject <MDLSkinDeformerComponent, NSCopying> {
    NSData * _jointBindTransforms;
    NSArray * _jointPaths;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _meshBindTransform;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jointBindTransforms;
@property (nonatomic, readonly) NSArray *jointPaths;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } meshBindTransform;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)copyJointBindTransformsInto:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg1 maxCount:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithJointPaths:(id)arg1 jointBindTransforms:(const struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg2 count:(unsigned long long)arg3 meshBindTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg4;
- (id)initWithJointPaths:(id)arg1 jointBindTransforms:(id)arg2 meshBindTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3;
- (id)jointBindTransforms;
- (id)jointPaths;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })meshBindTransform;

@end
