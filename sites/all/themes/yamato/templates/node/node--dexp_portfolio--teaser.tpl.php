<div id="node-<?php print $node->nid; ?>" class="dexp-portfolio-teaser <?php print $classes; ?> clearfix"<?php print $attributes; ?>>
    <div class="portfolio-content">
      <?php
  // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);    
      //$original_image = file_create_url($node->field_portfolio_images['und'][0]['uri']);
      $lightboxrel = 'portfolio_'.$nid;
      $portfolio_images = field_get_items('node', $node, 'field_portfolio_images');
      $first_image = '';
      if($portfolio_images){
        foreach($portfolio_images as $k => $portfolio_image){
          if($k == 0){
            $first_image = file_create_url($portfolio_image['uri']);
          }else{
            $image_path = file_create_url($portfolio_image['uri']);
            print '<a href="'.$image_path.'" rel="lightbox['.$lightboxrel.']" style="display:none">&nbsp;</a>';
          }
        }
      }
      ?>
      <div class="portfolio-image">
        <?php print render($content['field_portfolio_images']); ?>
        <div class="portfolio-overlay">
          <a href="<?php print $first_image;?>" rel="lightbox[<?php print $lightboxrel;?>]">Preview</a>
          <a href="<?php print $node_url;?>" title="<?php print $title; ?>">More Details</a>
        </div>
      </div>
      <div class="portfolio-description">
        <h5><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h5>
      </div>
    </div>
</div> 