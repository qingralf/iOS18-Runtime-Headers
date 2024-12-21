/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXComposedTileIdentifierConverter : NSObject <PXTileIdentifierConverter> {
    NSArray * _converters;
}

@property (nonatomic, readonly, copy) NSArray *converters;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)converters;
- (id)init;
- (id)initWithTileIdentifierConverters:(id)arg1;
- (bool)reverseTransformTileIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; }*)arg1;
- (bool)transformTileIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; }*)arg1 group:(unsigned long long*)arg2;

@end