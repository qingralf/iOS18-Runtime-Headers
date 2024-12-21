/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKAddressFilter : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _excludedOptions;
    unsigned long long  _includedOptions;
}

+ (id)filterExcludingAll;
+ (id)filterIncludingAll;
+ (bool)supportsSecureCoding;

- (id)_commaSeparatedListOfOptions:(unsigned long long)arg1;
- (id)_geoAddressFilter;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)excludesOptions:(unsigned long long)arg1;
- (bool)includesOptions:(unsigned long long)arg1;
- (id)init;
- (id)initExcludingOptions:(unsigned long long)arg1;
- (id)initIncludingOptions:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAddressFilter:(id)arg1;

@end