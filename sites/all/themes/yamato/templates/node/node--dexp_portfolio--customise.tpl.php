<div id="node-<?php print $node->nid; ?>" class="dexp-portfolio-custom <?php print $classes; ?> clearfix"<?php print $attributes; ?>>
	<div class="dexp-portfolio-item-inner">
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
		<div class="dexp-portfolio-thumb">
			<?php print render($content['field_portfolio_images']); ?>
			<a href="<?php print $first_image;?>" title="Work 5" rel="lightbox" class="dexp-portfolio-preview"  rel="lightbox[<?php print $lightboxrel;?>]">
				<i class="fa fa-plus"></i>
			</a>
			<a href="<?php print $node_url; ?>" class="dexp-portfolio-link"><i class="fa fa-sign-out"></i></a>
		</div>

		<div class="dexp-portfolio-item-details">
			<h5 class="category-name"><?php print render($content['field_portfolio_categories']); ?></h5>
			<a href="<?php print $node_url; ?>" title="<?php print $node_url; ?>">
				<h4 class="item-title"><?php print drupal_substr($title,0,7); ?>...</h4>
			</a>
			<a href="<?php print $node_url; ?>" class="btn btn-primary">MORE</a>
		</div>
		<div class="clearfix"></div>	
	</div>
</div> 