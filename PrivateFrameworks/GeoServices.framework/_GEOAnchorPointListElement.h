/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOAnchorPointListElement : NSObject <NSSecureCoding> {
    GEOComposedRouteAnchorPoint * _anchorPoint;
    NSMutableSet * _conjunctElements;
    NSUUID * _elementID;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)duplicateWithExistingAnchorPoint:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAnchorPoint:(id)arg1;
- (id)initWithAnchorPoint:(id)arg1 conjoinedWith:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isInConjunctionWith:(id)arg1;
- (void)updateWithSnappedAnchorPoint:(id)arg1;

@end