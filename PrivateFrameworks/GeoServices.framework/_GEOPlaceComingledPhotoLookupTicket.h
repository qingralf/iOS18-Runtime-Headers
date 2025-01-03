/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOPlaceComingledPhotoLookupTicket : GEOAbstractRequestResponseTicket <GEOMapServicePhotoLookupTicket> {
    NSString * _categoryIdentifier;
    GEOMapItemIdentifier * _mapItemIdentifier;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    GEOMapServiceTraits * _traits;
}

@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithPhotoCategoryIdentifier:(id)arg1 mapItemIdentifier:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 traits:(id)arg4;
- (void)submitWithHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;

@end
