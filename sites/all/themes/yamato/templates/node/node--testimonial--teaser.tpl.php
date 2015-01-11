<div id="<?php print $node->nid; ?>" class="testimonials-wrap <?php print $classes; ?>">
		<h3 class="testimonial-name"><?php print strip_tags(render($content['field_client'])); ?>, <small><?php print strip_tags(render($content['field_client_url'])); ?></small></h3>
		<div class="testimonial-content">
      <div class="testimonial-image">
  		  <?php print render($content['field_image']); ?>	
  		</div>
      <div class="testimonial-body">
        <?php print render($content['body']); ?>
      </div>
		</div>
</div>