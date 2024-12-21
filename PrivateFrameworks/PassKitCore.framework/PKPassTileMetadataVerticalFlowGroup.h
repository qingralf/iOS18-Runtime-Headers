/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPassTileMetadataVerticalFlowGroup : PKPassTileMetadata {
    long long  _heightClass;
    unsigned long long  _rows;
    long long  _widthClass;
}

@property (nonatomic) long long heightClass;
@property (nonatomic) unsigned long long rows;
@property (nonatomic) long long widthClass;

+ (bool)supportsSecureCoding;

- (bool)_setUpWithDictionary:(id)arg1 privateDictionary:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (long long)heightClass;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)rows;
- (void)setHeightClass:(long long)arg1;
- (void)setRows:(unsigned long long)arg1;
- (void)setWidthClass:(long long)arg1;
- (long long)widthClass;

@end