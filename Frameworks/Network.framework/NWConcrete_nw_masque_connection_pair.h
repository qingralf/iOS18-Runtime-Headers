/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Network.framework/Network
 */

@interface NWConcrete_nw_masque_connection_pair : NSObject <OS_nw_masque_connection_pair> {
    unsigned char  mcp_client_cid;
    BOOL  mcp_client_cid_header;
    unsigned short  mcp_client_cid_length;
    NSObject<OS_nw_protocol_options> * mcp_client_demux_options;
    NSObject<OS_nw_endpoint> * mcp_client_endpoint;
    NSObject<OS_dispatch_group> * mcp_close_group;
    bool  mcp_closed;
    BOOL  mcp_datagram_flow_id;
    bool  mcp_exclude_proxy_status;
    NSObject<OS_nw_array> * mcp_inner_direct_receive_connections;
    NWConcrete_nw_connection * mcp_inner_direct_send_connection;
    NSObject<OS_nw_content_context> * mcp_inner_response_context;
    NWConcrete_nw_connection * mcp_inner_server_cid_connection;
    bool  mcp_is_datagram;
    BOOL  mcp_key;
    unsigned short  mcp_local_port;
    struct mutex { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } m_lock; 
    }  mcp_lock;
    unsigned short  mcp_multipath_alt_port;
    int  mcp_multipath_service;
    NWConcrete_nw_connection * mcp_outer_connection;
    NWConcrete_nw_masque_connection * mcp_parent;
    bool  mcp_prohibit_cellular;
    bool  mcp_prohibit_constrained;
    bool  mcp_prohibit_expensive;
    bool  mcp_prohibit_wifi;
    bool  mcp_prohibit_wired;
    int  mcp_require_interface;
    NSObject<OS_sec_identity> * mcp_reverse_proxy_identity;
    bool  mcp_reverse_proxying;
    bool  mcp_sent_response;
    unsigned char  mcp_server_cid;
    BOOL  mcp_server_cid_header;
    unsigned short  mcp_server_cid_length;
    NSString * mcp_src_bundle_id;
    id /* block */  mcp_state_changed_handler;
    unsigned int  mcp_traffic_class;
    bool  mcp_uses_capsules;
    unsigned char  mcp_virtual_client_cid;
    unsigned short  mcp_virtual_client_cid_length;
    NSObject<OS_dispatch_source> * mcp_waiting_timer_source;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;

@end
