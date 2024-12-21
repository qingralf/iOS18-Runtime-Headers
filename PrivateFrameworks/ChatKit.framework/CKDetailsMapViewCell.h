/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKDetailsMapViewCell : CKDetailsCell <CKDetailsCell> {
    CKDetailsLocationStringCell * _locationStringView;
    UIView * _mapView;
    bool  _shouldShowLocationString;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CKDetailsLocationStringCell *locationStringView;
@property (nonatomic, retain) UIView *mapView;
@property (nonatomic) bool shouldShowLocationString;
@property (readonly) Class superclass;

+ (id)reuseIdentifier;
+ (bool)shouldHighlight;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)locationStringView;
- (id)mapView;
- (void)setLocationStringView:(id)arg1;
- (void)setMapView:(id)arg1;
- (void)setShouldShowLocationString:(bool)arg1;
- (bool)shouldShowLocationString;

@end